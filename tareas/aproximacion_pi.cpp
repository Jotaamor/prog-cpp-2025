#include <iostream>
#include <cmath> //invocar funcion de potencia
#include <iomanip> // invocar funcion setprecision
void pi_aprox(int n);
int n;

//

int main (void){
    int n=20;
    //std::cout << "¿Cuantos decimales de pi exactos necesita?\n";
    //std::cin >> n;
    pi_aprox(n);

    return 0;
}

void pi_aprox(int n){
    int N=n;
    int k=0;
    long double sum_pi = 0; 
    long double error = 0;

    while (k!=N+1){
        sum_pi=sum_pi+((1/pow(16, k))*((4.0/((8*k)+1))-(2.0/((8*k)+4))-(1.0/((8*k)+5))-(1.0/((8*k)+6))));
        std::cout << std::setprecision(20);//setprecision: quita el limite de salida de decimales en la pantalla
        std::cout.setf(std::ios::scientific);
        error=fabs(1-sum_pi/M_PI);
        std::cout <<"n:"<< k <<"\n"; 
        std::cout <<"pi:"<< sum_pi; 
        std::cout <<" el error es de:"<< error<<"\n";
        k=k+1;
    }
}