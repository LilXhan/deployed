#include <iostream>
using namespace std;

int main()
{
    int max, min, x;

    cout << "Ingrese rango final: " << endl;
    cin >> max;
    cout << "Ingrese rango inicial: " << endl;
    cin >> min;
    cout << "\n";
    x = max;

    while (max == min || min > max){
        cout << "Ingrese rango final: " << endl;
        cin >> max;
        cout << "Ingrese rango inicial: " << endl;
        cin >> min;
    }

    while (min <= x){
        cout << x << endl;
        x--;
    }

    cout << "Gracias..." << endl;
    cout << "Ultimo valor de x: " << x << endl;
}