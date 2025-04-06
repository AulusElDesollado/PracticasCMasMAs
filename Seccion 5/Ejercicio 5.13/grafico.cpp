#include <iostream>
using namespace std;

int main(){ 
    int n = 5;

    for(unsigned int i = 1; i <= n; i++){
        int grafico = 0;
        cout << "Ingrese un numero entre 1 y 30\n";
        cin >> grafico ;
        if((grafico <= 30) && (grafico >= 1)){
            grafico = grafico;
        }else{
            cout << "Valor incorrecto. Se establecio el valor en 1\n";
            grafico = 1;
        }
        for(unsigned int j = 1; j <= grafico; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}