#include <iostream>

using namespace std;

int main()
{
    int x;
    int suma = 0;
    int i = 0;
    while (i < 5)
    {
        cout << i + 1 << ":";
        cin >> x;
        if (x < 0)
            continue;
        suma = suma + x;
        i++;
    }
    cout << "suma naturalnych =" << suma;
    return 0;
}