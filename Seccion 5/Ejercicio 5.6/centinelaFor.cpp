#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int total = 0;
    int divisor = 0;
    cout << "Ingrese un valor. Ingrese 9999 para terminar"<< endl;
    
    for(;;){
        int temp = 0;
        cin >> temp;
        if(temp == 9999){
            break;
        }else{
            total += temp;
            divisor++;
        }
    }

    cout << "El promedio es "<< (static_cast<double>(total) / divisor) << endl;

    return 0;
}