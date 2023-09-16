#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        int ans = v[i]+1;
        for(int j = 0; j<n; j++)
        {
            if(ans == v[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
    return 0;
}