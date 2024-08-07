#include <iostream>
using namespace std;

double arrayMax(double *array, int size)
{
    double max;
    for (int i = 0; i < size; i++)
    {
        max = array[1];
        if (array[i] >= max)
        {
            max = array[i];
        }
    }
    cout << "The max value is: " << max << endl;

    return max;
}

void changeValue(double *ptr)
{
    *ptr = 42.0;
}

double *dynamicArray(int N)
{
    // Dynamically allocate an array of doubles of size N
    double *arr = new double[N];

    // Initialise the array with values (for example, using the array index)
    for (int i = 0; i < N; i++)
    {
        arr[i] = static_cast<double>(i); // Or use another initialization method
    }

    // Return the pointer to the array
    return arr;
}

void printArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
    }
}