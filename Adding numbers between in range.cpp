#include <iostream>
using namespace std;

    int sum(int n)
{
    if (n > 0)
{
    return n + sum(n - 1);
}   else
{
    return 0;
}
}

    int main()
{
    int result,m;
    cout<<"Input range ";
    cin>>m;
    result = sum(m);
    cout << "Sum of numbers present in between given range is "<<result<<endl;
    return 0;
}
