#include <iostream>
using namespace std;

int main()
{
    int rango, multiplicador, x;

    x = 1;

    do {
    cout << "¿La tabla de que número desea realizar?" << endl;
    cin >> multiplicador;
    cout << "¿Hasta que número desea realizar la tabla?" << endl;
    cin >> rango;
    } while (multiplicador <= 0 || rango <= 0);

    while (x <= rango){
        cout << x << " x " << multiplicador << " = " << x * multiplicador << endl;
        x++; 
    }
}