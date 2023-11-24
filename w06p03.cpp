#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie, nazwisko;
    int wiek;

    // cout << "Wiek: ";
    // cin >> wiek;
    // cout << "Imie: ";
    // getline(cin, imie);
    // cout << "Nazwisko: ";
    // cin >> nazwisko;
    string temp;
    cout << "Wiek: ";
    getline(cin,temp);
    wiek = atoi(temp.c_str());
    cout << "Imie: ";
    getline(cin, imie);
    cout << "Nazwisko: ";
    getline(cin,nazwisko);
    cout<<imie<<" "<<nazwisko<< " "<<wiek;

    return 0;
}