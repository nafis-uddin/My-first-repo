#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a= "Hello World";
    cout<<a<<endl;
    string b("Hellooo");
    cout<<b<<endl;
    string c("Hello Man", 5);   //First half will be output
    cout<<c<<endl;
    string d = "HHHello";       //last half will be output
    string e(d, 1);
    cout<<e<<endl;
    string f(3, 'B');
    cout<<f<<endl;
    return 0;
}