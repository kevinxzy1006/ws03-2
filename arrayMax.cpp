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

int main()
{
    double array[4] = {1.1, 2.2, 3.3, 4.4};
    int size = sizeof(array) / sizeof(array[0]);

    arrayMax(array, size);

    return 0;
}