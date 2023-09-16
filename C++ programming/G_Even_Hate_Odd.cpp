#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans;
    for(int i = 0; i<t; i++)
    {
        int eve = 0;
        int odd = 0;        // to start odd again from zero for another case
        int n;
        cin>>n;
        int a[n];
        for(int j= 0; j<n; j++)
        {
            cin>>a[j];
        }
            if(n%2!=0)
            {
                ans = -1;
            }
            else
            {
                for(int j = 0; j<n; j++)
                {
                    if(a[j]%2==0)
                    {
                        eve++;
                    }
                    else
                    {
                        odd++;
                    }  
                }
                if(eve == odd)
                {
                    ans = 0;
                }
                else
                {
                    if(odd>eve)
                    {
                        ans = odd - (n/2);
                    }
                    else
                    {
                        ans = eve - (n/2);
                    }
                }
            }
            cout<<ans<<endl;
    }
    return 0;
}