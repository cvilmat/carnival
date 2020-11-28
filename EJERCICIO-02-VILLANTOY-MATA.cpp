//Villantoy Mata, Crhistian
//EJERCICIO 02 27/11/2020

#include "iostream"
#include "stdio.h"
#include "stdlib.h"

void cambioSoles();
void cambioDolares();
void cambioEuros();
double dinero;

int main (){
int opcion = 0;
    do{
        std::cout << "      MENU   \n\n";
        std::cout << "1.    Soles \n";
        std::cout << "2.    Dolares \n";
        std::cout << "3.    Euros \n";
        std::cout << "9.    Salir \n\n";

        std::cout<< "Ingrese el tipo de moneda  :   ";
        std::cin >> opcion;
        if(opcion !=9){
            std::cout<< "Ingrese monto  :   ";
            std::cin >> dinero;
        }
        switch (opcion){
            case 1:
                cambioSoles ();
                break;
            case 2:
                cambioDolares();
                break;
            case 3:
                cambioEuros();
                break;
            default:
                if(opcion != 9){
                    std::cout<< " Valor invalido";
                }
                if(opcion = 9 ){
                    std::cout << "Saliendo del programa";
                }
            break;
        }
    } while (opcion != 9);     
    return 0;
}
void cambioSoles(){
    std::cout << "Dolares equivalentes  :   $ " << dinero*0.28 << "\n";
    std::cout << "Euros equivalentes    :   E " << dinero*0.23 << "\n\n";
    system ("pause"); system ("cls");
}
void cambioDolares(){
    std::cout << "Soles equivalentes  :   S/ " << dinero*3.6 << "\n";
    std::cout << "Euros equivalentes  :   E " << dinero*0.84 << "\n\n";
    system ("pause"); system ("cls");
}
void cambioEuros(){
    std::cout << "Soles equivalentes    :   S/ " << dinero*4.31 << "\n";
    std::cout << "Dolares equivalentes  :   $ " << dinero*1.2 << "\n\n";
    system ("pause"); system ("cls");
}