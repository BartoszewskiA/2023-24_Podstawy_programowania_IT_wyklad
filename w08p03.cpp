#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane2.txt", ios::out);
    plik << "tekst do zapisania"<<endl;
    plik << "tekst do \nzapisania";
    plik.close();

    return 0;
}