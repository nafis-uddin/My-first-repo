#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i = 0; i<3; i++)
    {
        cin>>a[i];
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0; i<3; i++)
    {
    maximum = max(maximum, a[i]);
    minimum = min(minimum, a[i]);
    }
    cout<<minimum<<" " <<maximum;
    return 0;
}