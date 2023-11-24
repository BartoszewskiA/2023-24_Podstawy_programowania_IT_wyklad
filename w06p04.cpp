#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    cout << "Podaj tekst: ";
    getline(cin, tekst);
    int poz = tekst.find(' ');
    if (poz == -1) // -1 oznacza, że nie znaleziono znaku
    {
        cout << "Nie było spacji";
        return 0;
    }
    while(1)
    {
        if (poz == -1)
            break;
        cout << poz << endl;
        poz = tekst.find(" ", poz + 1);
    }
    return 0;
}