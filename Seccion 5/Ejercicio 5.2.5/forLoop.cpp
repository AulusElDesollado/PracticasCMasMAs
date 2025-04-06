#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 20; i++){
        cout << i;
        if((i % 5) == 0){
            cout << endl;
        }else{
            cout << "\t";
        }
    }

    return 0;
}