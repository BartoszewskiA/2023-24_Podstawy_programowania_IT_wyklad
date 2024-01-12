#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string tab[1000];
    int n = 0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad operacji dyskowych";
        return 0;
    }
    string s;
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }
    plik.close();

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << tab[i] << endl;
    // }

    plik.open("dane.txt", ios::out);
    for (int i = 0; i < n; i++)
        plik << i + 1 << ": " << tab[i] << endl;
    plik.close();
    return 0;
}