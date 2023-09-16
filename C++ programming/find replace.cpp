#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s.find("Go")<<endl;

    cout<<s.find("goo")<<endl;

    while(s.find("I")!=-1)
    {
        s.replace(s.find("I"), 1, "$");
    }
    cout<<s;
    return 0;
}