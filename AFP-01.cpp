/*
Autor: VILLANTOY MATA, Crhistian
*/
#include "iostream"
int main (){

int importeAcumulado;
int importeRetirar;

std::cout << "Ingrese importe acumulado de AFP S/ ";
std::cin >> importeAcumulado;

if (importeAcumulado <= 4300){
    std::cout << "Monto a retirar hasta S/ "<< importeAcumulado << "\n";
    std::cout << "Ingrese monto a retirar S/ ";
    std::cin >> importeRetirar;

    if (importeAcumulado >= importeRetirar){
        std::cout << "Cuota de S/ " << importeRetirar << "\n";
        std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
    }

    else{
        std::cout << "ERROR";
    }
}

else{
    if (importeAcumulado > 4300 && importeAcumulado <= 17200 ){
        std::cout << "Monto a retirar hasta S/ 4300 \n";
        std::cout << "Ingrese monto a retirar S/ ";
        std::cin >> importeRetirar;

            if (importeRetirar <= 4300){
                std::cout << "Primera cuota de S/ " << importeRetirar*0.5 << "\n";
                std::cout << "Segunda cuota de S/ " << importeRetirar*0.5 << "\n";
                std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
            }

            else{
                std::cout << "ERROR";
            }
    }



    else{
        if (importeAcumulado > 17200 && importeAcumulado <= 51600 ){
            std::cout << "Monto a retirar hasta S/ " << importeAcumulado*0.25 << "\n";
            std::cout << "Ingrese monto a retirar S/ ";
            std::cin >> importeRetirar;

            if (importeRetirar <= importeAcumulado*0.25){
                std::cout << "Primera cuota de S/ " << importeRetirar*0.5 << "\n";
                std::cout << "Segunda cuota de S/ " << importeRetirar*0.5 << "\n";
                std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
            }

            else{
                std::cout << "ERROR";
            }
        }



        else{
            std::cout << "Monto a retirar hasta S/ 12 900 \n";
            std::cout << "Ingrese monto a retirar S/ ";
            std::cin >> importeRetirar;

            if (importeRetirar <= 12900){
                std::cout << "Primera cuota de S/ " << importeRetirar*0.5 << "\n";
                std::cout << "Segunda cuota de S/ " << importeRetirar*0.5 << "\n";
                std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
            }

            else{
                std::cout << "ERROR";
            }
        }
    }   
}
return 0;
}

