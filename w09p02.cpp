#include <iostream>
#include <string>

using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

void wczytaj(osoba &ktos);
void wypisz(osoba ktos);
int main()
{
    osoba ktos = {"NN", "NN", 0};
    wczytaj(ktos);
    wypisz(ktos);
    return 0;
}

void wczytaj(osoba &ktos)
{
    string temp;
    cout << "Imie: ";
    getline(cin, ktos.imie);
    cout << "Nazwisko: ";
    getline(cin, ktos.nazwisko);
    cout << "Wiek: ";
    getline(cin, temp);
    ktos.wiek = stoi(temp);
}

void wypisz(osoba ktos)
{
    cout << ktos.imie << " "
         << ktos.nazwisko << " "
         << ktos.wiek << endl;
}