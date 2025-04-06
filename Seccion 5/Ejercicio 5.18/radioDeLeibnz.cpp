#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float pi = 0.0;
    for (int n = 0; n <
         1000;n++){
        float operacion = 4.0 * pow(-1,n)/(2*n+1);
        pi += operacion;
        cout << n << "\t"<< pi << endl;

    }

    return 0;
}