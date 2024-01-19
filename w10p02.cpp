#include <iostream>

using namespace std;

int main()
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = tab; // int *p = &tab[0];

    // cout<<*p<<endl;
    // p++;
    // cout << *p << endl;
    // for (int i=0; i<10; i++)
    //     cout<<*(p++)<<" ";
    for (int i = 0; i < 10; i++)
        cout << *(p + i) << " ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << *tab << " ";
    //     tab++; - zle
    // }
    return 0;
}