#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i= 0; i<n;i++)
    {
        cin>>a[i];
    }
    int ans = 0;
    int i = 0; 
    int j = n-1;
    for(; i<j;)
    {
        if(a[i] == a[j])
        {
            ans = 1;
        j--;
        i++;
        }
        else 
        {
            ans = 0; 
        break;
        }
    }
    (ans==1)? cout<<"YES" : cout<<"NO";
    return 0;
}