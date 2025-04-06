#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int monto;
    int principal = 100000;
    

    cout << "Anno" << setw(21)<< "Monto en deposito" << endl;

    cout << fixed << setprecision(2);

    for(unsigned int anno = 1; anno <= 10; ++anno){
        cout << "Tasa del anno " << anno << endl;
        for(int i = 5; i <= 10; ++i){
            double tasa = i / 100.0;
            monto = principal * pow(1.0 + tasa, anno);

            cout << setw(4)<< anno << setw(21) << (monto/100) <<"."<< (monto%100)<< endl;
        }
    }
}