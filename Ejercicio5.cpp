#include "iostream"
#include "string"
using namespace std;
//Verificar si la palabra inicia y termina con la misma letra//
int main (void)
{
    string palabra;
    char letra1,letra2;
    int longitud;
    cout << "Introduzca una palabra (todo en minusculas): ";
    cin >> palabra;
    longitud=palabra.length();
    cout << "longitud de la palabra: " << longitud << endl;
    letra1=palabra[0];
    letra2=palabra[longitud - 1];
    cout << "La primera letra de la palabra es: " << letra1 << endl; 
    cout << "La ultima letra de la palabra es: " << letra2 << endl;
    if (letra1==letra2)
        cout << "La primera y ultima letra son la misma";
    else
        cout << "La primera y ultima letra son distintas";
    return 0;
}