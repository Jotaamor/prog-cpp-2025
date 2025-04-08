#include <iostream>

int main(void) { // int-entero, main-programa principal, void-vacio
    std::string name;
    std::cout << "Hola\n Dime tu nombre :)\n";
    std::getline(std::cin, name); 
    // cin recibe y guarda texto en una variable (solo una cadena) que se necesita definir antes
    // get line toma la linea completa (nombre completo) hasta un salto de linea \n 
    // necesita el primer argumento para saber de donde tomar la informacion
    std::cout << "Hola " << name << ", Un gusto :3\n" ;
    return 0; //cada programa retorna un estado
}