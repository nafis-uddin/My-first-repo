#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n%2)     //0 or 1//
    {
        case 0:
        cout<<"This is even number";
        break;
        default:      //case 1:
        cout<<"This is odd number";
    }
    return 0;
}