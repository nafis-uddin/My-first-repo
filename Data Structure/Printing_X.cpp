#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l = 0;
    int r = n-1;
    for(int i =0; i<n; i++) 
    {
        vector<char>v(n,' ');
        if(l<r||l>r)
        {
            v[l] = '\\';
            v[r] = '/';
        }
        else if(l==r)
        {  
            v[r] = 'X';
        }
        for(char x:v)
        {
            cout<<x;
        }
        l++;
        r--;
        cout<<endl;
    }
    return 0;
}
