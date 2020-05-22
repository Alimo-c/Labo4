#include "iostream"
#include "string"
using namespace std;
//Verificar si la palabra tiene más de 10 caracteres y si es par o impar//
int main (void)
{
    string palabra;
    int longitud;
    cout << "Introduzca una palabra: ";
    cin >> palabra;
    longitud=palabra.length();
    cout << "La palabra tiene: " << longitud << " caracteres" << endl;
    if (longitud>10)
        cout <<"La palabra tiene mas de 10 caracteres" << endl;
    else
        cout <<"La palabra no tiene mas de 10 caracteres" << endl;
    if (longitud%2==0)
        cout <<"La longitud de la palabra par" << endl;
    else 
        cout <<"La longitud de la palabra impar" << endl;    
    return 0;
}