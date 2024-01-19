#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    // int *wsk;
    // wsk = &x;
    int *wsk = &x;
    *wsk = 10;
    cout << "x=" << x << " *wsk =" << *wsk;

    return 0;
}