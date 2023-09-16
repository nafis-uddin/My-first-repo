#include <bits/stdc++.h>
using namespace std;
long long int power(long long int n, long long int m)
{
    double ans = 0;
    for(int i = 2; i<=m; i++)
    {
        if(i%2==0)
        {
            ans+= pow(n, i);  
        // ans double for exact ans using power, then convert into long long int
        }
    }
    return ans;
}
int main()
{
    long long int n, m;
    cin>>n>>m;
    long long int ans = power(n, m);
    cout<<ans;
    return 0;
}