#include <iostream>
using namespace std;

int main(){
    unsigned int x;
    unsigned int y;

    cout << "Escriba dos enteros en el rango de 1 a 20: " << endl;
    cin >> x >> y;

    for(unsigned int i = 1; i<=y; ++i){
        for(unsigned int j = 1; j <= x; ++j){
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}