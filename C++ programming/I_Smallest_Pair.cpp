#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k= 0; k<t; k++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        int i;
        int j= i+1;
        int sum;
        int minimum = INT_MAX;
        for(i = 0; i<j; i++)
            {
                for(j= i+1;j<n; j++)
                {
                    sum = a[i] + a[j] + j-i;
                    minimum = min(minimum, sum);
                }
            }
            cout<<minimum<<endl;
    }
    return 0;
}
