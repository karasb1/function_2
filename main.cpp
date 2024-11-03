#include <iostream>
#include <ctime>
using namespace std;

const int max_size = 100;
const int length = 10;
void PrintArray(int array[])
{
    for (int i = 0; i < max_size; i++)
    {
        if (i % 20 == 0)
        {
            cout << endl;
        }
        cout << array[i] << " ";
    }
    cout << endl << endl;
}

int sum(int array[], int j = 0) {
    int sum = 0;
    for (int i = j; i < j + length; i++) {
        sum += array[i];
    }
    return sum;
}

int findMinSum(int array[], int index, int minSum, int minIndex) {
    if (index > max_size - length) {
        return minIndex;
    }
    int currentSum = sum(array, index);
    if (currentSum < minSum) {
        minSum = currentSum;
        minIndex = index;
    }
    return findMinSum(array, index + 1, minSum, minIndex);
}

int main() {
    srand(time(0));
    int array[max_size];
    for (int i = 0; i < max_size; i++) {
        array[i] = rand() % 100;
    }
    cout << "Array: ";
    PrintArray(array);
    int initialSum = sum(array, 0);
    int minIndex = findMinSum(array, 1, initialSum, 0);
    cout << "Position with the least sum: " << minIndex << endl;
    return 0;
}