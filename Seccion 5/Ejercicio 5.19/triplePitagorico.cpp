#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int limite = 500;

    for(int m = 1; m <= limite; m++){
        for(int n = 1; n <= m ; n++){
            int a = (pow(m,2)-pow(n,2));
            int b = ((2*m)*n);
            int c = (pow(m,2)+pow(n,2));

            cout << "Triple de pitágoras (" << a << "," << b << "," << c << ")" <<endl;
        }

    }

    return 0;
}