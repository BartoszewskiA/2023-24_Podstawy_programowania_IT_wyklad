#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[100];

    for (int i = 0; i < 100; i++)
        tab[i] = rand() % 41 - 10;

    int suma = 0;
    for (int i = 0; i < 100; i++)
        suma += tab[i];
    double srednia = (double)suma / 100;

    cout << "Srednia = " << srednia << endl;
    cout << "wielsze od sredniej:" << endl;
    for (int i = 0; i < 100; i++)
        if (tab[i] > srednia)
            cout << tab[i] << " ";
    cout << endl
         << "mniejsze od sredniej:" << endl;
    for (int i = 0; i < 100; i++)
        if (tab[i] < srednia)
            cout << tab[i] << " ";
    return 0;
}