#include <iostream>

using namespace std;

int main()
{
    int tab[10];
    for (int i = 0; i < 10; i++)
    {
        cout << i << ":";
        cin >> tab[i];
    }

    for (int i = 0; i < 10; i++)
        cout << "tab[" << i << "]=" << tab[i] << endl;
    return 0;
}