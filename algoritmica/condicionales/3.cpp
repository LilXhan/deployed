
#include <iostream>
using namespace std;

int main()
{
    float T1, T2, T3, T4, EMC, EFC, ES, PT, PF;

    cout << "Ingrese la nota de la primera tarea: " << endl;
    cin >> T1;
    cout << "Ingrese la nota de la segunda tarea: " << endl;
    cin >> T2;
    cout << "Ingrese la nota de la tercera tarea: " << endl;
    cin >> T3;
    cout << "Ingrese la nota de la cuarta tarea: " << endl;
    cin >> T4;

    cout << "Ingrese la nota del examen de medio curso: " << endl;
    cin >> EMC;
    cout << "Ingrese la nota del examen de final de curso: " << endl;
    cin >> EFC;

    PT = (T1 + T2 + T3 + T4) / 4;
    PF = (EMC + EFC + PT) / 3;

    if (PF < 10.5) {
        cout << "Ingrese la nota del sustitutorio: " << endl;
        cin >> ES;
        if (EMC < EFC) {
            PF = (ES + EFC + PT) / 3;
            cout << "La menor nota es del examen de medio curso se reemplazara por el sustitorio." << endl;
            cout << "Su promedio final es: " << PF << endl;
        }
        else {
            PF = (EMC + ES + PT) / 3;
            cout << "La menor nota es del examen de final curso se reemplazara por el sustitorio." << endl;
            cout << "Su promedio final es: " << PF << endl;
        }
    } else {
        cout << "Usted aprobo." << endl;
    }

}