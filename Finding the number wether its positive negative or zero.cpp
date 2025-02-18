#include<iostream>
using namespace std;
int main()
{
    int number;


    cout << "the number is: ";
    cin >> number;
    if (number < 0)
    {
        cout << "number is negative";
    }
    else if (number > 0)
    {
        cout << "number is positive";
    }
    else
    {
        cout << "number is zero";
    }
}