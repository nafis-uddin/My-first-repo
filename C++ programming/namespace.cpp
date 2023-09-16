#include <bits/stdc++.h>
using namespace std;
namespace karim
{
    int age = 34;
}
namespace sakib
{
    int age2 = 13;
    void hello()
    {
        cout<<"I am Sakib"<<endl;
    }
}
using namespace karim;
using namespace sakib;
int main()
{
    cout<<sakib :: age2<<endl;
    cout<<age<<endl;
    hello();
    return 0;
}
