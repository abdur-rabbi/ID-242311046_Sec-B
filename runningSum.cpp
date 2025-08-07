/* This program calculates the running sum of an array */

#include <iostream>
using namespace std;

void runningSum(int arr[], int size)
{
    int sum = 0;
    cout << "Running sum is: ";
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;
    int arr[x];
    cout << "Enter " << x << " elements: ";
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    runningSum(arr, x);
    return 0;
}