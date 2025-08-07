/* This program counts the frequency of each element in an array */

#include <iostream>
using namespace std;
void frequencyCount(int arr[], int size)
{
    int i;
    int freqMap[100] = {0};
    for (i = 0; i < size; i++)
    {
        freqMap[arr[i]]++;
    }
    cout << "Element frequencies are: " << endl;
    for (i = 0; i < 100; i++)
    {
        if (freqMap[i] > 0)
        {
            cout << "Element " << i << ": " << freqMap[i] << " times" << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n], freq[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    frequencyCount(arr, n);

    return 0;
}
