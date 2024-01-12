#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };

    // osoba ktos = {"Jan", "Kowalski", 30};
    osoba ktos, ktos_inny;
    string temp;
    //---------------------------------
    cout << "Imie: ";
    getline(cin, ktos.imie);
    cout << "Nazwisko: ";
    getline(cin, ktos.nazwisko);
    cout << "Wiek: ";
    getline(cin, temp);
    ktos.wiek = stoi(temp);
    //--------------------------------
    cout << "Imie: ";
    getline(cin, ktos_inny.imie);
    cout << "Nazwisko: ";
    getline(cin, ktos_inny.nazwisko);
    cout << "Wiek: ";
    getline(cin, temp);
    ktos_inny.wiek = stoi(temp);
    //----------------------------------
    cout << ktos.imie << " "
         << ktos.nazwisko << " "
         << ktos.wiek << endl;
    cout << ktos_inny.imie << " "
         << ktos_inny.nazwisko << " "
         << ktos_inny.wiek << endl;
    return 0;
}