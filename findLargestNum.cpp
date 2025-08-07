/* This function finds the largest number among three numbers */

#include <iostream>
using namespace std;
void find_largNum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is the largest number among three number.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the largest number among three number.";
    }
    else
    {
        cout << c << " is the largest number among three number.";
    }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    find_largNum(num1, num2, num3);
    return 0;
}