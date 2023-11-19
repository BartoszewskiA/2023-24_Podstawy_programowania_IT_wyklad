#include <iostream>

using namespace std;

void ile_razy();
int main()
{
    ile_razy();
    ile_razy();
    ile_razy();
    ile_razy();
    return 0;
}

void ile_razy()
{
    static int x = 0;
    x++;
    cout << "Uruchomiono " << x << " razy" << endl;
}