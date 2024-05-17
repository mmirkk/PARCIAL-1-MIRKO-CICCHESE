/// EJ 2 - Mirko Cicchese

#include<iostream>

using namespace std;

int main(){

    int anio;

    cout << "## CHECKER ANIO BICIESTO ##" << endl;
    cout << endl;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if (anio %4 == 0){
        cout << "Es biciesto" << endl;

    }else{
        cout << "NO es biciesto" << endl;
    }

    return 0;
}
