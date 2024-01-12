#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("w08p04.log", ios::in);
    if (!plik.good())
    {
        cout << "Brak pliku log";
        return 0;
    }
    string temp;
    getline(plik, temp);
    int ile = atoi(temp.c_str());
    ile++;
    plik.close();
    //-------------------------------------------
    plik.open("w08p04.log", ios::out);
    plik << ile;
    plik.close();
    //-------------------------------------------
    if (ile < 5)
    {
        cout << "OK program dziala";
    }
    else
    {
        cout << "Kup pelna wersje";
    }

    return 0;
}