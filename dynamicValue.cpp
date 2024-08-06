#include <iostream>
using namespace std;

double *dynamicArray(int N, double M)
{
    // Dynamically allocate an array of doubles of size N
    double *arr = new double[N];

    // Initialize the array with the vlaue M
    for (int i = 0; i < N; i++)
    {
        arr[i] = M;
    }

    return arr; // Return the pointer to the array
}

int main()
{
    int size = 5;
    double initValue = 3.14; // Example initialization value
    double *array = dynamicArray(size, initValue);

    // Print the array to verify the values
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
    }

    // Free the dynamically allocated memory
    delete[] array;

    return 0;
}
