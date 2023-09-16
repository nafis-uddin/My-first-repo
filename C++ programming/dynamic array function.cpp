#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int[3];
    for(int i = 0; i<3; i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int *a = fun();
    for(int i = 0; i<3; i++)
    {
        cout<<a[i]<<" ";
    }
    delete[] a;
    // for(int i = 0; i<3; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    return 0;
}