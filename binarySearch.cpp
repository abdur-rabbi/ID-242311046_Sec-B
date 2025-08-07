/* This program implements binary search on a sorted array */

#include <iostream>
#include <algorithm>
using namespace std;
void binary_Search(int data[], int x, int trg)
{
    int st = 0, end = x - 1, mid;
    while (st <= end)
    {
        mid = (st + end) / 2;
        if (trg < data[mid])
        {
            end = mid - 1;
        }
        else if (trg > data[mid])
        {
            st = mid + 1;
        }
        else
        {
            cout << "Element found at index: " << mid;
            return;
        }
    }
    cout << "Element not found.";
}
int main()
{
    int i, n, m;
    cout << "Input array length: ";
    cin >> n;
    int arr[n];
    cout << "Array elements are before sorted: ";
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 10 + 5;
        cout << arr[i] << " ";
    }
    cout << "\nArray elements are after sorted: ";
    sort(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter target element: ";
    cin >> m;
    binary_Search(arr, n, m);
}