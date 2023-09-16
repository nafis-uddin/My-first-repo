#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>x={2,3,4};
    vector<int>x2={1,5};
    x2.insert(x2.begin()+1, x.begin(), x.end());

    for(int x: x2)
    {
        cout<<x<<" ";
    }
    cout<<endl;




    vector<int>v(3,1);
    v.pop_back();

    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+1, 2);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2, 2, 3);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    v.erase(v.begin()+3);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.push_back(4);
    v.erase(v.begin()+3, v.end()-1);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}