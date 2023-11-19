#include <iostream>
#include <ctime>

using namespace std;

int main()
{
   srand(time(NULL)); 
    for (int i = 0; i < 10; i++)
        cout << rand()%6 +1 << " ";
    return 0;
}