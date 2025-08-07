/** This function calculates the sum of the elements in an array */

#include <iostream>
using namespace std;
void arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of the array elements is: " << sum << endl;
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
    arraySum(arr, x);
    return 0;
}