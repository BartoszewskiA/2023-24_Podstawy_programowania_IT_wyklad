#include <iostream>

using namespace std;

int main()
{
    int a, b;
    double w;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (b != 0)
    {
        w = (double)a / b;
        cout << "wynik= " << w;
    }
    else
        cout << "nie dziel przez zero";
    return 0;
}