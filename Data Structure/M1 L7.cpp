#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    for(string x:v)
    {
        cout<<x<<" ";
    }

    cout<<endl<<endl;

    int m;
    cin>>m;
    cin.ignore(); // after int using getline() will take space which is after 2 not J Neimi
    vector<string>v2(m);
    for(int i = 0; i<m; i++)
    {
        getline(cin,v2[i]);
    }
    for(string x:v2)
    {
        cout<<x<<endl;
    }
    return 0;
}