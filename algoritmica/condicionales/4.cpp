#include <iostream>
using namespace std;

int main()
{
    int divid, divis;

    cout << "Ingrese el dividendo: " << endl;
    cin >> divid;
    cout << "Ingrese el divisor: " << endl;
    cin >> divis;

    if (divid % divis == 0){
        cout << divis << " si es divisor de " << divid << "." << endl;
    } else {
        cout << "No son divisibles." << endl;
    }
}