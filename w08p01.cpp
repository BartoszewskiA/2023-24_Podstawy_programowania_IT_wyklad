#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (plik.good() == true)
    {
        string s;
        while (!plik.eof())
        {
            getline(plik, s);
            cout << s <<endl;
        }
        plik.close();
    }
    else
    {
        cout << "Blad operacji dyskowych";
    }
    return 0;
}