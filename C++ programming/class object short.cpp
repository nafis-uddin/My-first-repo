#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    char sec;
    char name[100];
    // const char *name;
    // string name;
    // student(int r, int c, char s, string n)
    student(int r, int c, char s, const char* n)
    {
        roll = r;
        cls = c;
        sec = s;
        strcpy(name, n);
        // name = n;
    }
};
int main()
{
    student rahim(30, 7, 'A', "Rahim Shah");
    student karim(20, 6, 'A', "Karim");

    cout<<karim.name<<endl<<rahim.name;
    return 0;
}
