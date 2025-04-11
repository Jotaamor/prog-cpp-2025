/* juego de adivinar un numero

    Tener un numero 
    Preguntar al usuario el numero 
    Informar si lo adivino o no
*/

#include <iostream>

int main(void){
    const int NUM = 10;
    int guessed_number = NUM/2;
    //Blucles: while, for
while (guessed_number != NUM){ //for (;;) {
    std::cout << "Adivina un numero entre 1 y 100:\n";
    std::cin >> guessed_number;
    //std::cout << "Escribiste:" << guessed_number <<"\n";

    if (guessed_number>100){
        std::cout << "Escribiste un numero mayor a 100\nFinalizando juego >:C\n";
        break;
        //continue;
    }else if (1>guessed_number){
        std:: cout << "Escribiste un numero menor a 1\nFinalizando juego >:C\n";
        break; //sale del bucle
        //continue; //Repite el bucle ignorando lo de abajo
    }

    if (guessed_number == NUM){//condicional
        std::cout <<"GANASTE!!!\n";
        //break; //sale del for, while
    }else if (guessed_number < NUM){
        std:: cout <<"Tal ves un poco alto.\n";
    }else {
        std:: cout <<"Un poco mas abajo.\n";
    }
}
    return 0;
}