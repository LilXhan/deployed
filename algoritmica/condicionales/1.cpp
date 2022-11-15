
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Ingrese un numero: " << endl;
    cin >> num;

    if (num == 0) {
        cout << "El numero que ingresaste es 0" << endl;
    } else if (num > 0) {
        cout << "El numero que ingresaste es positivo" << endl;
    } else { 
        cout << "El número que ingresaste es negativo" << endl;
    }
}