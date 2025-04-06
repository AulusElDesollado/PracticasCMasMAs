#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int contador = 1;
    
    while (contador <= 20){
        cout << contador;
        if((contador % 5) == 0){
            cout << endl;
        } else{
            cout << "\t";
        }
        contador++;
    }

    return 0;
}