#include<iostream>
using namespace std;

inline int sum(int, int)
{
    return a+b;
}

int main()
{
    int a, b;
    cout << "Enter any two numbers for which you want sum: ";
    cin >> a >> b;
    cout << "Sum: " << sum(a,b);
    return 0;
}