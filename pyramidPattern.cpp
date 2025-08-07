/* This program prints a pyramid pattern of asterisks */

#include <iostream>
using namespace std;
void printPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= (2 * i); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    else
    {
        printPyramid(n);
    }
    return 0;
}