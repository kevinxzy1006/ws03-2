#include <iostream>
using namespace std;

void printArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
    }
}

int main()
{
    double array[4] = {1.1, 2.2, 3.3, 4.4};
    int size = 4;

    printArray(array, size);

    return 0;
}