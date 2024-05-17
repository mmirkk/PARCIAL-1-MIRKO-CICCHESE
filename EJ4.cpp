/// EJ 4 - Mirko Cicchese

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int materias, nota, ponderacion, acumP;
    float promedioPonderado, PromedioFinal;
    string nombre;

    cout << "## PROMEDIO DE NOTAS PONDERADAS ##" << endl;
    cout << endl;

    do{
        cout<<"Ingresar cant de materias: ";
        cin >> materias;
    }while(materias <= 0);

        cout << endl;

    for(int i=1; i <= materias; i++)
    {
        cout<<"Ingresar nombre: ";
        cin >> nombre;
        cout<<"Ingresar nota para "<< nombre << ": ";
        cin >> nota;
        cout<<"Ingresar ponderacion para " << nombre << " (En porcentaje): ";
        cin >> ponderacion;
        cout << endl;

        promedioPonderado += nota * ponderacion;
        acumP += ponderacion;
    }

    if (acumP > 100){
        cout<< "-El porcentaje supera el 100%" << endl;
    }else if(acumP < 100){
        cout << "-El porcentaje es menor a 100%" << endl;
    }else{
        PromedioFinal = promedioPonderado / acumP;
        cout << "-Promedio final ponderado: " << fixed << setprecision(2) << PromedioFinal << endl;
    }

    return 0;
}
