#include <iostream>
using namespace std;

int main(){
    
    int altura = 0;

    cout << "Ingrese un numero impar:" << endl;
    cin >> altura;
    while (altura){
         int centro = (altura + 1) / 2;

        for(int i = 1;i <= centro; i++){
            for(int j = 1; j <= centro - i ; j++){
            cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++){
                cout << "*";
            }
            cout << endl;
        }

        for(int i = centro -1 ; i >= 1; i--){
            for(int j = 1; j <= centro - i; j++){
                cout << " ";
            }
            for (int k = 1; k <= 2* i - 1; k++){
                cout << "*";
            }
            cout << endl;
        }
        cout << "Ingrese un numero impar:" << endl;
        cin >> altura;
    }
    return 0;
}