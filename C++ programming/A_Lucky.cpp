#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    string s;
    for(int i = 0; i<n; i++)
    {
        getline(cin,s);
        char f = s[0] + s[1] + s[2];
        char l = s[3] + s[4] + s[5];
        if(f==l)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}