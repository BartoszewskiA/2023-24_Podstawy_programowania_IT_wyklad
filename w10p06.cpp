#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int *tab[100];
    for (int i = 0; i < 100; i++)
    {
        tab[i] = new int;
        *tab[i] = rand() % 101;
    }
    for (int i = 0; i < 100; i++)
        cout << *tab[i] << " ";
    for (int i = 0; i < 100; i++)
    delete tab[i];
        return 0;
}