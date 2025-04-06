#include <iostream>
#include <iomanip>

int main(){
    unsigned int cuenta;

    for(cuenta = 1 ; cuenta <= 10 ; ++cuenta) {
        if (cuenta == 5){
            //break;
            continue;
        }

        std::cout << cuenta << " ";
    }
    std::cout << "\nSalio del ciclo en cuenta = " << cuenta << std::endl;
}