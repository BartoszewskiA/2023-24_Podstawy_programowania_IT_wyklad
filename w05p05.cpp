#include <iostream>

using namespace std;

int policz(int t[], int ile);
void zwieksz_o_1(int t[], int ile);

int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tab_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 9;
    int n_2 = 11;

    cout << "tablica 1: " << policz(tab, n) << endl;
    zwieksz_o_1(tab,n);
    cout << "tablica 1: " << policz(tab, n) << endl;
    //cout << "tablica 2: " << policz(tab_2, n_2) << endl;
    return 0;
}

int policz(int t[], int ile)
{
    int suma = 0;
    for (int i = 0; i < ile; i++)
    {
        suma += t[i];
    }
    return suma;
}

void zwieksz_o_1(int t[], int ile)
{
    for (int i = 0; i < ile; i++)
        t[i]++;
}