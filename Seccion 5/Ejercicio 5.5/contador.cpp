#include <iostream>
using namespace std;

int main(){
    	
    int contadorMax;
    int total = 0;
    
    cout << "Ingrese la cantidad de números a sumar " << endl;
    cin >> contadorMax;

    for(int i=1;i<=contadorMax;i++){
        int suma = 0;
        cin >> suma;
        total += suma;
    }

    cout << total;

    return 0;
}