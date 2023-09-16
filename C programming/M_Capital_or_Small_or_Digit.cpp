#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s, 100);
    if(s[0]<='z'&& s[0]>='a')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else if(s[0]<='Z' && s[0]>= 'A')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(s[0]<='9' && s[0]>='0')
    {
        cout<<"IS DIGIT";
    }
    return 0;
}