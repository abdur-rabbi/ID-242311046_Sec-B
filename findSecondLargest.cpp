/* This program finds the second largest element in an array */

#include <iostream>
using namespace std;
void second_larg(int data[], int n)
{
    int j, max, s_larg;
    max = s_larg = INT_MIN;
    for (j = 0; j < n; j++)
    {
        if (data[j] > max)
        {
            s_larg = max;
            max = data[j];
        }
        else if (data[j] > s_larg || data[j] != max)
        {
            s_larg = data[j];
        }
    }
    cout << "largest element is: " << max << "\nSecond largest element is: " << s_larg;
}
int main()
{
    int i, x;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    cout << "Enter " << x << " array elements: ";
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    second_larg(arr, x);
}