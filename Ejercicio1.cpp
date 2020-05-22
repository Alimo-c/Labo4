#include "iostream"
using namespace std;
//Verificar si un número es divisible entre otro//
int main (void)
{
    int a , b, c;
    cout << "Ingrese el numero que sera dividido: ";
    cin >> a;
    cout << "Ingrese el numero con el que se dividira: ";
    cin >> b;
    c=a%b;
    if (c==0)
        cout << a << " es divisible entre " << b;
    else
        cout << a << " no es divisible entre " << b;
    return 0;
}