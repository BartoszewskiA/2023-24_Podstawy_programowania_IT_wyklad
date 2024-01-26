#include <iostream>

using namespace std;

struct element
{
    int dana;
    element *nast;
};

element *pocz = NULL;
void dodaj_element(int x);
int zabierz_element();
int policz();
int suma();

int main()
{
    for (int i = 0; i < 10; i++)
        dodaj_element(100 + i);
    cout << "Na stosie jest: " << policz() << endl;
    dodaj_element(201);

    while (pocz != NULL)
    {
        cout << zabierz_element() << " ";
    }

    return 0;
}

void dodaj_element(int x)
{
    element *p = new element;
    p->dana = x;
    p->nast = pocz;
    pocz = p;
}

int zabierz_element()
{
    element *p = pocz;
    pocz = pocz->nast;
    int temp = p->dana;
    delete p;
    return temp;
}

int policz()
{
    element *p = pocz;
    int ile = 0;
    while (p != NULL)
    {
        p = p->nast;
        ile++;
    }
    return ile;
}

int suma()
{
    element *p = pocz;
    int suma = 0;
    while (p != NULL)
    {
        suma += p->dana;
        p = p->nast;
    }
    return suma;
}