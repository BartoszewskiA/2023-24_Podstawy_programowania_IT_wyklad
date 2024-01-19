#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "Ile liczb wylosować: ";
    cin >> n;
    int *tab = new int[n];
    for (int i = 0; i < n; i++)
        tab[i] = rand() % 101;
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    delete [] tab;
    return 0;
}