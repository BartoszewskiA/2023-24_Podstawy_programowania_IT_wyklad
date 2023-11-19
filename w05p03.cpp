#include <iostream>

using namespace std;

double srednia(int a, int b);
double srednia(double a, double b);
double srednia(int a, int b, int c);
double srednia(int a, int b, int c, int d);

int main()
{
    srednia(2.6, (double)7);
    return 0;
}

double srednia(int a, int b)
{
    return (a + b) / 2.0;
}

// int srednia(int a, int b)
// {
//     return (a + b) / 2;
// }

double srednia(double a, double b)
{
    return (a + b) / 2;
}
double srednia(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
double srednia(int a, int b, int c, int d)
{
    return (a + b + c + d) / 4.0;
}