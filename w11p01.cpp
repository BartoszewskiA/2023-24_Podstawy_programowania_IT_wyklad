#include <iostream>

struct punkt
{
    int x;
    int y;
};

using namespace std;

int main()
{
   //statycznie
    punkt p1;
    p1.x = 10;
    p1.y = 20;
    cout << "(" << p1.x << ";" << p1.y << ")\n";
    //dynamicznie
    punkt *p2 = new punkt;
    // int *x = new int;
    // *x = 40;
    p2->x = 40;
    p2->y = 50;
    cout << "(" << p2->x << ";" << p2->y << ")";
    return 0;
}