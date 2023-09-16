#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss1(s);
    string word;
    while(ss1>>word)
    {
        cout<<word<<endl;
    }

//ss>>word  there's no word now, all of them transfered. That's why taking another string

    int cnt = 0;
    s = "Alan Walker";
    stringstream ss2(s);
    while(ss2>>word)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}