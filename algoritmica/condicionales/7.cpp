#include <iostream>
using namespace std;

int main()
{
    int edad;
    string titulo, estudia, trabaja;

    cout << "¿Cual es su edad?" << endl;
    cin >> edad;

    cout << "¿Posee un titulo? (S/N)" << endl;
    cin >> titulo;

    cout << "¿Usted estudia? (S/N)" << endl;
    cin >> estudia;

    cout << "¿Usted trabaja? (S/N)" << endl;
    cin >> trabaja;

    if (edad > 15 and edad <= 20) {
        if (trabaja == "s" or trabaja == "S") {
            cout << "Joven Empleado." << endl;
        }
        if (estudia == "N" or estudia == "n") {
            cout << "Joven deseempleado" << endl;
        } 
        if (estudia == "S" or estudia == "s") {
            cout << "Joven estudiante" << endl;
        }
    } else if (edad > 20 and edad <= 50) {
        if ((titulo == "s" or titulo == "S") and (trabaja == "S" or trabaja == "s")) {
            cout << "Adulto profesionista" << endl;
        } else {
            cout << "Adulto desempleado" << endl;
        }
    }

}