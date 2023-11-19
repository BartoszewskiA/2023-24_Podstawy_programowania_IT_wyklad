#include <iostream>

using namespace std;

void wypisz_cos();
int dodaj(int x, int y);
int dodaj_v2(int x, int y=0);

int main()
{
    // wypisz_cos();
    cout << dodaj_v2(15);
    return 0;
}

void wypisz_cos()
{
    cout << "cos";
    return;
}

int dodaj(int x, int y)
{
    int wynik = x + y;
    return wynik;
}

int dodaj_v2(int x, int y)
{
    int wynik = x + y;
    return wynik;
}
