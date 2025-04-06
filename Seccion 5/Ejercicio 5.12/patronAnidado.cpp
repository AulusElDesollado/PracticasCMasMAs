#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
   for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; ++j){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; 
    
    for(int i = 10; i >= 1; i--){
        for(int j = 1; j <= i; ++j){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 10; i >=1; i--){
        for(int k = 0; k < (10-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout <<"*";
        }
        cout << endl;
    } 

    
    for (int i = 1; i <=10; i++){
        for(int k = 0; k < (10-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}