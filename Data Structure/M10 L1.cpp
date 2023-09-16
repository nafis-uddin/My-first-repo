#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1(2,4);
    list<int>l2(l1);
    for(int x: l2)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    l1.resize(5, 9);
    for(int x: l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    l1.clear();

    

    int a[3] = {3, 4, 5};
    list<int>l3(a, a+3);
    for(int x: l3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    list<int>l4(5,0);
    
    return 0;
}