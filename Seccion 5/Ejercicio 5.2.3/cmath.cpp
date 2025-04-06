#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){

     float i = 2.5;

    cout << fixed << left;

    cout << setw(10) << setprecision(2) << pow(i,3);


    return 0;
}