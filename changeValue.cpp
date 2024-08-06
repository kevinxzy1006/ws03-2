#include <iostream>
using namespace std;

void changeValue(double *ptr)
{
    *ptr = 42.0;
}

int main()
{
    double a = 10.0;

    changeValue(&a);

    return 0;
}