/* This program finds the index of a target element in an array */

#include <iostream>
using namespace std;
int search(int nums[], int x, int target)
{
    for (int j = 0; j < x; j++)
    {
        if (target == nums[j])
        {
            return j;
        }
    }
    return -1;
}
int main()
{
    int i, n, tg;
    cout << "Input array length: ";
    cin >> n;
    int arr[n];
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 10 + 5;
        cout << arr[i] << " ";
    }
    cout << "\nEnter target elements: ";
    cin >> tg;
    int index = search(arr, n, tg);
    if (index == -1)
        cout << "Element not found.";
    else
        cout << "Element found.At Index: " << index << endl;
}
