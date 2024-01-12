#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad operacji dyskowych";
        return 0;
    }
    string s;
    while (!plik.eof())
    {
        getline(plik, s);
        //plik >> s; 
        // czyta cały plik wyraz po wyrazie
        //separtorami sa spacje i entery
        cout << s << endl;
    }
    plik.close();
    return 0;
}