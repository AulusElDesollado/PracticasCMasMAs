#include <iostream>
using namespace std;

int main(){
    unsigned int contador;
    int menor = 0;

    cout << "Introduzca la cantidad de valores que se van a ingresar: \n";
    cin >> contador;
    
    if(contador <= 0){
        cout << "Valor incorrecto. Ingrese un valor.\n";
    }
    menor = contador;

    for(int i = 1; i <= contador; ++i){
        int lectura = 0;
        cout << "Ingrese un número: ";
        cin >> lectura;
        
        if(lectura < menor){
            menor = lectura;
        }
    }

    cout << "El menor número ingresado es " << menor << endl;
    return 0;
}