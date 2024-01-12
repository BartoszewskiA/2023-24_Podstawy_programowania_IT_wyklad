#include <iostream>
#include <string>

using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
} tab[3];

//osoba tab[3];

void wczytaj();
void wypisz();

int main()
{
    wczytaj();
    wypisz();
    return 0;
}

void wczytaj()
{
    string temp;
    for (int i = 0; i < 3; i++)
    {
        cout << "Imie: ";
        getline(cin, tab[i].imie);
        cout << "Nazwisko: ";
        getline(cin, tab[i].nazwisko);
        cout << "Wiek: ";
        getline(cin, temp);
        tab[i].wiek = stoi(temp);
    }
}

void wypisz()
{
    for (int i = 0; i < 3; i++)
    {
        cout << tab[i].imie << " "
             << tab[i].nazwisko << " "
             << tab[i].wiek << endl;
    }
}