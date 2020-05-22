#include "iostream"
using namespace std;
//Verificar si un número es positivo o negativo//
int main (void)
{
    int a;
    cout << "Ingrese el numero: ";
    cin >> a;
    if (a>=0)
        cout << a << " es un numero positivo";
    else if (a<=0)
        cout << a << " es un numero negativo";
    else 
        cout << a << " es 0";
    return 0;
}