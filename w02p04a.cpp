#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    int i = 0;
    do
    {
        cout << i + 1 << ": Naucze sie c++\t";
        i++;
    } while (i < n);
    return 0;
}