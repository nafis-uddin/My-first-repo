#include <bits/stdc++.h>
using namespace std;
class person
{
    public:
    int cls;
    string name;
    person(int cls, string name)
    {
        this->cls = cls; 
        this->name = name;
    }
};
int main()
{
    person karim(6, "Karim");
    cout<<karim.cls<<endl;
    return 0;
}