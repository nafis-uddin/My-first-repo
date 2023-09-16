#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt[26] = {0};
    for(int i = 0; i<n; i++)
    {
        char s;
        cin>>s;
        cnt[s-'a']++;
    }
    for(int i = 0; i<26; i++)
    {
        for(int j = 1; j<=cnt[i]; j++)
        {
            char ans = i+97;
            cout<<ans;
        }
    }
    return 0;
}