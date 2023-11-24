#include <iostream>

using namespace std;

int main()
{
    string s = "Ala ma kota";
    for (int i = 0; i < s.length(); i++)
        cout << s[i] << endl;
    cout << "[";
    for (int i = s.length()-1; i >= 0; i--)
        cout << s[i];
    cout << "]";

    return 0;
}