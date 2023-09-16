#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    string s;
    for(int i = 0; i<n; i++)
    {
        cin>>m;
        getchar();
        getline(cin,s);
        int a[26] = {0};
        for(int i = 0; i<m; i++)
        {
            if(a[s[i] - 'A'] == 0)
            {
                a[s[i] - 'A']+= 2;
            }
            else
            {
                a[s[i] - 'A']++;
            }
        }
        int sum = 0;
        for(int i = 0; i<26; i++)
        {
            sum = sum + a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}