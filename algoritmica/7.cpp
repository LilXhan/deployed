#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x = 1;
    while (x <= 10)
    {
        cout << x << endl;
        x++;
        getch(); // enter
    }

    cout << "\n Gracias..." << endl;
    cout << "\n Último valor de x: " << endl;
}