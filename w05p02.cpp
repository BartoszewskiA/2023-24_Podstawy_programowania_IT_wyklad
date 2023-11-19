#include <iostream>

using namespace std;

void zwieksz_o_10(int &x);

int main()
{
    int liczba = 2;
    //zwieksz_o_10(liczba);

    liczba = zwieksz_o_10_v2(liczba);
    
    cout << liczba;
    return 0;
}

void zwieksz_o_10(int &x)
{
    x += 10;
}

int zwieksz_o_10_v2(int x)
{
    return x + 10;
}