#include <iostream>
#include "workshop.h"
using namespace std;

int main()
{
    double a = 10.0;

    double array[4] = {1.1, 2.2, 3.3, 4.4};
    int size = sizeof(array) / sizeof(array[0]);

    arrayMax(array, size);

    changeValue(&a);

    double *array = dynamicArray(size);

    // Print the array to verify the values
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
    }

    // Free the dynamically allocated memory
    delete[] array;

    return 0;
}