/// EJ 3 - Mirko Cicchese

#include<iostream>

using namespace std;

int main(){

    int numero, anterior, resultado;
    unsigned long long factorial = 1;

    cout << "## CALCULADORA FACTORIAL ##" << endl;
    cout << endl;

    do{
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;
    }while(numero < 0);


    for(int i = numero; i > 0; i--){
        factorial *= i;
    }

    cout <<"Resultado de " << numero <<"!: " << factorial << endl;

    return 0;
}
