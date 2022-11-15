#include <iostream>
using namespace std;

int main()
{
    int N1, N2;

    cout << "Ingrese el primer numero: " << endl;
    cin >> N1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> N2;

    if (N1 < N2){
        cout << "- " << N2 << endl;
        cout << "- " << N1 << endl;
    } else {
        cout << "- " << N1 << endl;
        cout << "- " << N2 << endl;
    }
}