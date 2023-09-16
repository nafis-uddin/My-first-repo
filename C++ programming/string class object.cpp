// #include <bits/stdc++.h>
// using namespace std;
// class person
// {
//     public:
//     int cls;
//     string name;
//     person(int c, string n)
//     {
//         cls = c;
//         name = n;
//     }
//     void hello()
//     {
//         cout<<"HElloo"<<endl;
//     }
//     void hi()
//     {
//         cout<<name<<" "<<cls<<endl;
//     }
// };
// int main()
// {
//     person karim(6, "Karim");
//     cout<<karim.cls<<endl;
//     karim.hello();
//     karim.hi();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
class person
{
    public:
    int cls;
    string name;
    person(int c, string n)
    {
        cls = c;
        name = n;
    }
    void hello()
    {
        cout<<"HEllooo";
    }
    void hi()
    {
        cout<<endl;
        cout<<name<<" "<<cls;
    }
};
int main()
{
    person karim(7, "Karim");
    cout<<karim.cls<<endl;
    karim.hello();
    karim.hi();
    return 0;
}