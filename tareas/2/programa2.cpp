//se debe ejecutar con isprime.cpp si se usa el codigo viejo

#include <iostream>
#include <cmath>
#include "isprime.h"

int main(int argc, char **argv){

    long ultimo_primo = 0;
    long k = std::stol(argv[1]);

    while(k%2==0){
        //std::cout << 2 << "\n";
        ultimo_primo=2;
        k /= 2;
        if(k==1){
            std::cout << "El primo mayor es: "<< ultimo_primo << "\n";
            break;
        }
    }

    for(int i=3;i <= sqrt(k); i += 2){//me interesan solo impares
        while(k%i==0){
            //std::cout << i << "\n";
            ultimo_primo=i;
            k /=i;
        }
        if(k==1){
            std::cout << "El primo mayor es: "<< ultimo_primo << "\n";
            break;
        }
    }

    if(k>2){
        std::cout << "El primo mayor es: "<< k << "\n";
    }

    /*for(long ii = k; ii >= 1; --ii) { //codigo sin optimizar
        std::cout << "I";
        if (isprime(ii) == true) {
            if(k%ii == 0){
                std::cout << "El primo mayor es: "<< ii ;
                break;
            }else{
                std::cout << "C";                
                continue;
            }
        }
    }*/
}