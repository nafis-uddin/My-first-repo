#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j = 0; j<n; j++)
        {
            cin>>a[j];
        }
        bool flag = true;
        for(int j = 0; j<n-1; j++)
        {
            if(a[j]<=a[j+1])
            {
                flag = true; 
            }
            else 
            {
                flag = false;
                break;
            }
        }
    (flag == true)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}