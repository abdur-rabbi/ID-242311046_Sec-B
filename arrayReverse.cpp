/* This function reverses the given array */

#include <iostream>
using namespace std;
void arrayReverse(int arr[], int size)
{
    cout << "The reversed array is: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
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
    arrayReverse(arr, x);
    return 0;
}