

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Ingresa un numero: " << endl;
    cin >> num;

    if (num == 0){
        cout << "Ingresaste 0." << endl;
    } else if (num % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
    } else {
        cout << "El numero ingresado es impar" << endl;
    }
}