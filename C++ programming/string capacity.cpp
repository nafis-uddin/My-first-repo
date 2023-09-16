#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;         //capacity minimum 15   otherwise size = capacity
    s.clear();
    cout<<s<<endl<<"Null"<<endl;
    if(s.empty()== true) cout<<"Empty";
    else cout<<"Non Empty";

    // {
    //     cout<<"Empty";
    // }
    // else
    // {
    //     cout<<"Non empty";
    // }

    cout<<endl;
    s = "World";
    cout<<s<<endl;
    s.resize(4);
    cout<<s<<endl;
    s.resize(5,'d');
    cout<<s<<endl;
    s.resize(7,'o');
    cout<<s;
    return 0;
}  