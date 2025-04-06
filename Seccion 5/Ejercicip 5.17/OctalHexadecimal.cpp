#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){ 
    long long cocienteOctal = 0;
    long long residuoOctal = 0;
    long long cocienteBinario = 0;
    long long residuoBinario = 0;  
    long long cocienteHexa = 0;
    long long residuoHexa = 0;

    cout << setw(10) << "Decimal" << setw(10) << "Octal" << setw(20) << "Binario" << setw(15) << "Hexadecimal" << endl;

    for (int i = 1;i <= 256;++i){

        string octal = "";
        string binario = "";
        string hexa = "";
        long long decimalOctal = 0;
        long long decimalBinario = 0;
        long long decimalHexa =0;

    	 //Octal
        decimalOctal = i;
        while(decimalOctal >= 8){     
            residuoOctal = decimalOctal % 8;
            octal = to_string(residuoOctal) + octal;
            cocienteOctal = decimalOctal / 8;
            decimalOctal = cocienteOctal;
        }
        octal = to_string(decimalOctal) + octal;
       

        //Binario
        decimalBinario = i;
        while(decimalBinario >= 2){
            residuoBinario = decimalBinario % 2;
            binario = to_string(residuoBinario) + binario;
            cocienteBinario = decimalBinario / 2;
            decimalBinario = cocienteBinario;
        }
        binario = to_string(decimalBinario)+binario;
       
        //Hexadecimal
        decimalHexa = i;
        while(decimalHexa >= 16){
            residuoHexa = decimalHexa % 16;
            hexa = to_string(residuoHexa) + hexa;
            cocienteHexa = decimalHexa / 16;
            decimalHexa = cocienteHexa;
        }

        hexa = to_string(decimalHexa) + hexa;

        cout << setw(10) << i 
             << setw(10) << octal 
             << setw(20) << binario 
             << setw(15) << hexa 
             << endl;
    }
}