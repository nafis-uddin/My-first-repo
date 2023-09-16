#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    a = a+b;    //a+= b;
    cout<<a<<endl<<b<<endl;

    a = "Alan";
    b = "Walk";
    a.append(b);
    cout<<a<<endl<<b<<endl;

    b = b + "e";
    cout<<b<<endl;
    b = b+"r";
    cout<<b<<endl;
    b.push_back('s');
    cout<<b<<endl;
    b.pop_back();
    cout<<b<<endl;

    a = "Play Footballer";    
    a.erase(13);
    cout<<a<<endl;
    a.erase(5,4);
    cout<<a<<endl; 
    a.insert(5, "Foot");
    cout<<a<<endl; 
    a.replace(4, 5, " ");
    cout<<a<<endl; 
    return 0;
}
