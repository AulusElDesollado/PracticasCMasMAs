#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    float valor = 333.546372;
    cout << fixed << left; //left es una función de iomanip que justifica el texto a la izquierda

    //Lo mejor es utilizar setw y set precision después de fixed
    cout << setw(15)<< setprecision(1) << valor;
    cout << setw(15)<< setprecision(2) << valor;
    cout << setw(15)<< setprecision(3) << valor;

    return 0;
}