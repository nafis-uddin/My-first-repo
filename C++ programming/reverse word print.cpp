#include <bits/stdc++.h>
using namespace std;
void hello(stringstream & ss)
{
    string word;
    if(ss>>word)
    {
        hello(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    hello(ss);
    return 0;
}