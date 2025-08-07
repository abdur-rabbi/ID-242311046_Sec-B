/* This program counts the number of even and odd elements in an array */

#include <iostream>
using namespace std;
void countEvenOdd(int arr[], int size)
{
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout << "Even count: " << evenCount << " Odd count: " << oddCount << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countEvenOdd(arr, n);
    return 0;
}