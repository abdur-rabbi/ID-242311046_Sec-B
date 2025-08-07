/* This program swaps two integer values without using a temporary variable */

#include <iostream>
using namespace std;
int swap(int a, int b)
{
    cout << "Before swaping M= " << a << "\tN= " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swaping M= " << a << "\tN= " << b << endl;
}
int main()
{
    int m, n;
    cout << "Input two integer number: ";
    cin >> m >> n;
    swap(m, n);
}