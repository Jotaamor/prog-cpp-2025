//se debe ejecutar con isprime.cpp

#include <iostream>
#include <cmath>
#include "isprime.h"

int main(int argc, char **argv){

    long int suma = 0;
    int k = std::stoi(argv[1]);

    for(int ii = k; ii >= 1; --ii) {
        if (isprime(ii) == true) {
            std::cout << ii << ", "; 
            suma = suma + ii; 
        }
    }
    std::cout << "La suma de los primos menores es:" << suma << "\n";
    k=k-1;
}