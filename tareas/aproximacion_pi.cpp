#include <iostream>
#include <cmath> //invocar funcion de potencia
#include <iomanip> // invocar funcion setprecision
void pi_aprox(int n);
int n;

int main (void){
    int n=0;
    std::cout << "¿Cuantos decimales de pi exactos necesita?\n";
    std::cin >> n;
    pi_aprox(n);

    return 0;
}

void pi_aprox(int n){
    int N=n;
    int k=0;
    long double sum_pi = 0; 

    while (k!=N){
        sum_pi=sum_pi+((1/pow(16, k))*((4.0/((8*k)+1))-(2.0/((8*k)+4))-(1.0/((8*k)+5))-(1.0/((8*k)+6))));
        std::cout << std::setprecision(k+3);//setprecision: quita el limite de salida de decimales en la pantalla
        //k+3 es suficiente para que no se aproxime el decimal importante
        //std::cout <<"pi es igual a:"<< sum_pi <<"\n"; 
        k=k+1;
        //std::cout <<"Cuenta en:"<< k <<"\n"; 
    }
    std::cout <<"pi es igual a: "<< sum_pi <<"\n"; 
}