#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    long long pre[n];
    pre[0] = a[0];
    for(int i = 1; i<n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    long long l, r;
    for(int i = 0; i<q; i++)
    {
        cin>>l>>r;
        long long sum;
        l--; 
        r--;
        if(l==0) sum = pre[r];
        else sum = pre[r] - pre[l-1];
        cout<<sum<<endl;
    }
    return 0;
}