#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;

    // for(int i = 0; i<5; i++)
    // {
    //     cout<<s[i];
    // }
    string::iterator it;
    for(it = s.begin(); it<s.end(); it++)
    {
        cout<<*it;
    }
    return 0;
}
