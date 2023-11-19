#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Ile liczb wczytac:";
    cin >> ile;
    int tab[100]; //max 100

    for (int i = 0; i < ile; i++)
    {
        cout << i << ":";
        cin >> tab[i];
    }

    for (int i = 0; i < ile; i++)
        cout << "tab[" << i << "]=" << tab[i] << endl;
    return 0;
}