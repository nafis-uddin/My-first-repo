#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(26, 0);
    string s;
    getline(cin, s);
    for(int i = 0; i<s.size(); i++)
    {
        v[s[i]-'a']++;
    }
    for(int i = 0; i<26; i++)
    {
        if(v[i]>0)
        {
            char ans = i+'a';
            cout<<ans<<" : "<<v[i]<<endl;
        }
    }
    return 0;
}