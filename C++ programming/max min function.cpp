#include <iostream>
using namespace std;
int min(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int max(int a, int b)
{
    if(a<b)
    return b;
    else 
    return a;
}
int main()
{
    int a, b;
    cin>>a>>b;
    int maximum = max(a,b);
    int minimum = min(a,b);
    cout<<maximum<<" "<<minimum;
    return 0;
}