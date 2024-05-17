/// EJ 1 - Mirko Cicchese

#include<iostream>

using namespace std;

int main(){

    float num1, num2, resto;

    cout << "## CALCULADORA DE OPERACIONES BASICAS ##" << endl;
    cout << endl;

    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;

    cout << endl;

    cout << "SUMA: " << num1 + num2 << endl;

    cout << "RESTA: " << num1 - num2 << endl;

    cout << "MULTIPLICACION: " << num1 * num2 << endl;

    if (num2 != 0){

        cout << "DIVISION: " << num1 / num2 << endl;

    }else
        cout << "DIVISION: ERROR, no se puede dividir por 0" << endl;

    return 0;
}
