#include<iostream>
using namespace std;

int add(int x);

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;
    cout << "Sum of numbers between given number =  " << add(x);

    return 0;
}

int add(int x)
{
    if(x != 0)
    return x + add(x - 1);
    return 0;
}
