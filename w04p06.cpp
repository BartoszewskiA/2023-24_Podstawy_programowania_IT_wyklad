#include <iostream>

using namespace std;

int main()
{
    int tab[11][11];
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 11; j++)
            tab[i][j] = i * j;

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
            cout << tab[i][j] << "\t";
        cout << endl;
    }

    return 0;
}