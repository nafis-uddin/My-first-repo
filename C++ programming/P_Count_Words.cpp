#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool inside = false;
    int cnt = 0;
    for(char c: s)
    {
        if(isalpha(c))
        {
            if(inside == false)
            {
                cnt++;
            }
            inside = true;
        }
        else 
        {
            inside = false;
        }
    }
    cout<<cnt;
    return 0;
}