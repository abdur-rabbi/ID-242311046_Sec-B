/* This program removes duplicate elements from an array */

#include <iostream>
using namespace std;
void duplicate_Remove(int data[], int x)
{
    int j;
    cout << "Final array is: "; 
    for (j = 0; j < x; j++)
    {
        bool duplicate = false;
        for (int k = 0; k < j; k++)
        {
            if (data[j] == data[k])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            cout << data[j] << " ";
        }
    }
}
int main()
{
    int i, n;
    cout << "Input array length: ";
    cin >> n;
    int arr[n];
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    duplicate_Remove(arr, n);
}