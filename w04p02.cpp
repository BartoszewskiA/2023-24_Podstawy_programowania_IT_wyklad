#include <iostream>

using namespace std;

int main()
{
    const int MAX = 100;
    int tab[MAX];
    int n;
    cout << "Ile liczb: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "tab[" << i << "]=";
        cin >> tab[i];
    }

    for (int i = n-1; i >= 0; i--)
        cout << tab[i] << " ";
    return 0;
}