#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   
    int producto = 0;
    int cantidad = 0;
    float total = 0.0;
    float precio = 0.0;

    while(true){
        cout << "Ingrese un producto del 1 al 5. Luego agregue la cantidad. Para salir presione 0.\n";
        cin >> producto >> cantidad;

        if((producto >= 1) && (producto <=5)){
            //
        }else if(producto == 0){
            break;
        } else{
            cout << "Valor incorrecto. Ingrese el valor";
            cin >> producto;
        }

        if(cantidad == 0){
            break;
        }else if(cantidad < 1){
            cout << "Cantidad incorrecta. Ingrese la cantidad";
            cin >> cantidad;
        }


        switch (producto)
        {
        case 1:
            precio =2.98;
            break;
        
        case 2:
            precio = 4.50;
            break;
        
        case 3:
            precio = 9.98;
            break;

        case 4:
            precio = 4.49;
            break;

        case 5:
            precio = 6.87;
            break;
        
        default :
            break;
        }
        total += precio * cantidad;
    }

    cout << "El total es de " << total << endl;

    return 0;
}