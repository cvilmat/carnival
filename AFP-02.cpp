/*
Autor: VILLANTOY MATA, Crhistian
*/
#include "iostream"
int main (){

int importeAcumulado;
int importeRetirar;
int cicloRepite = 0;

std::cout << "Ingrese importe acumulado de AFP S/ ";
std::cin >> importeAcumulado;
if (importeAcumulado <= 4300){
    std::cout << "Monto a retirar hasta S/ "<< importeAcumulado << "\n";

    while (importeAcumulado < importeRetirar || importeRetirar < 0){
        if (cicloRepite > importeAcumulado){
            std::cout << "ERROR: No tiene fondos suficiente \n";
        }
        std::cout << "Ingrese monto a retirar S/ ";
        std::cin >> importeRetirar;
        cicloRepite = importeRetirar;
    }
    
    std::cout << "Cuota en 10 dias de S/ " << importeRetirar << "\n";
    std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
}

else{
    if (importeAcumulado > 4300 && importeAcumulado <= 17200 ){
        std::cout << "Monto a retirar hasta de S/ 4300 \n";

        while (4300 < importeRetirar){
            if (cicloRepite > 4300){
                std::cout << "ERROR: Monto excede lo permitido \n";
            }
            std::cout << "Ingrese monto a retirar S/ ";
            std::cin >> importeRetirar;
            cicloRepite = importeRetirar;
        }

        std::cout << "Primera cuota en 10 dias de S/ " << importeRetirar*0.5 << "\n";
        std::cout << "Segunda cuota en 30 dias de S/ " << importeRetirar*0.5 << "\n";
        std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
        
    }



    else{
        if (importeAcumulado > 17200 && importeAcumulado <= 51600 ){
            std::cout << "Monto a retirar hasta S/ " << importeAcumulado*0.25 << "\n";
             
            while (importeAcumulado*0.25 < importeRetirar){
                if (cicloRepite > importeAcumulado*0.25){
                    std::cout << "ERROR: Monto excede lo permitido \n";
                }
                std::cout << "Ingrese monto a retirar S/ ";
                std::cin >> importeRetirar;
                cicloRepite = importeRetirar;
            }

            std::cout << "Primera cuota en 10 dias de S/ " << importeRetirar*0.5 << "\n";
            std::cout << "Segunda cuota en 30 dias de S/ " << importeRetirar*0.5 << "\n";
            std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
        }



        else{
            std::cout << "Monto a retirar hasta S/ 12 900 \n";

            while (12900 < importeRetirar){
                if (cicloRepite > 12900){
                    std::cout << "ERROR: Monto excede lo permitido \n";
                }
                std::cout << "Ingrese monto a retirar S/ ";
                std::cin >> importeRetirar;
                cicloRepite = importeRetirar;
            }
            
            std::cout << "Primera cuota en 10 dias de S/ " << importeRetirar*0.5 << "\n";
            std::cout << "Segunda cuota en 30 dias de S/ " << importeRetirar*0.5 << "\n";
            std::cout << "Saldo disponible S/ " << importeAcumulado-importeRetirar;
        }
    }
}
    return 0;
}

