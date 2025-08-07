/* This program demonstrates inserting and deleting elements in an array */

#include <iostream>
using namespace std;
void inserting_deleting(int data[], int n)
{
    int i, k, j = n;
    cout << "Input index number whose element we want to delete: ";
    cin >> k;
    if (k < 0 || k >= j)
    {
        cout << "Invalid delet index.";
        return;
    }
    for (i = k; i < j - 1; i++)
    {
        data[i] = data[i + 1];
    }

    cout << "Array after deletion: ";
    for (i = 0; i < j - 1; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\nInput index number where we want to insert element: ";
    int st;
    cin >> st;
    if (st < 0 || st > j)
    {
        cout << "Index out of bounds." << endl;
        return;
    }
    cout << "\nInput element to insert: ";
    int element;
    cin >> element;

    for (i = j; i > st; i--)
    {
        data[i] = data[i - 1];
    }
    data[st] = element;
    cout << "Array after insertion: ";
    for (i = 0; i < j; i++)
    {
        cout << data[i] << " ";
    }
}
int main()
{
    int i, x;
    cout << "Input array length: ";
    cin >> x;
    int arr[x];
    cout << "Enter " << x << " array elemtnts: ";
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    inserting_deleting(arr, x);
}