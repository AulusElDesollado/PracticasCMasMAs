#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int factorial = 1;
    unsigned int cantidadFactorial = 5;

    cout << setw(10) << left;
    cout << "n" << "!n\n";
    for(int i = 1;i<= cantidadFactorial; ++i){
        factorial *= i;
        cout << setw(10) << left;
        cout << i << factorial << endl;
    }
    return 0;
}