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
    person * karim = new person(9, "Karim");
    person * rahim = new person(5, "Rahim");

    *rahim = *karim;
    // rahim->cls = karim->cls;

    delete karim;
    cout<<rahim->cls;  
    return 0;
}