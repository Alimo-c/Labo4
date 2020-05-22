#include "iostream"
using namespace std;
//Verificar si un número es par o impar//
int main (void)
{
    int a;
    cout << "Ingrese el numero: ";
    cin >> a;
    if (a%2==0)
        cout << a << " es un numero par";
    else
        cout << a << " es un numero impar";
    return 0;
}