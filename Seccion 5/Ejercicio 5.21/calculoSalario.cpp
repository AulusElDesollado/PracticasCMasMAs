#include <iostream>
using namespace std;

int main(){

    int calcSalario = 0;

    cout << "Ingrese 1 para gerente. Ingrese 2 para trabajadores por hora\nIngrese 3 para empleados por comisión. Ingrese 4 para trabajadores de destajo\nCTRL Z para salir\n"; 

    while((cin >> calcSalario)){
        
        float comision = 0.0;
        int producto = 0;
        float horas = 0;
        float sueldo = 0.0;
        float destajo = 0.0;

        switch(calcSalario)
        {
            case 1:
                cout << "Ingrese el sueldo semanal\n";
                cin >> sueldo;
                cout << "El sueldo es de: $" << sueldo << endl;

            break;

            case 2:
                cout << "Ingrese las horas trabajas:\n";
                cin >> horas;
                cout << "Ingrese el sueldo por hora:\n";
                cin >> sueldo;
                if(horas > 40){
                    cout << "El sueldo es de: $" << ((horas - 40) * (sueldo * 1.5))+(40*sueldo) << endl;
                }else if(horas <= 0){
                    cerr << "valor incorrecto";
                }else{
                    cout << "El sueldo es de: $" << horas * sueldo << endl;
                }

            break;
            
            case 3:
                cout << "Ingrese el monto vendido:\n";
                cin >> comision;
                cout << "El sueldo es de: $" << ((comision * 0.0527) + 250.0) << endl;
            break;

            case 4:
                cout << "Ingrese la cantidad de productos fabricados:\n";
                cin >> producto;
                cout << "Ingrese el valor del destajo:\n";
                cin >> destajo;
                cout << "El sueldo es de " << producto * destajo << endl;
            break;

            default:
            break;
        }
        cout << "Ingrese 1 para gerente. Ingrese 2 para trabajadores por hora\nIngrese 3 para empleados por comisión. Ingrese 4 para trabajadores de destajo\nCTRL Z para salir\n";

    }
    return 0;
}