#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<float>v(2,3.2);
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    v.push_back(2.2);
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.resize(1);
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.resize(5, 3.3);
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}