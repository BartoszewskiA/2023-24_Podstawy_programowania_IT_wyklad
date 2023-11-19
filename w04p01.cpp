#include <iostream>

using namespace std;

int main()
{
    const int ILE = 10;
    int tab[ILE];
    for (int i = 0; i < ILE; i++)
    {
        cout << "tab[" << i << "]=";
        cin >> tab[i];
    }

    for (int i = 0; i < ILE; i++)
        cout << tab[i] << " ";
    return 0;
}