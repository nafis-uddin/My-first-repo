#include <bits/stdc++.h>
using namespace std;
class student 
{
    public:
    int cls; 
    int roll;
    char sec;
    char name[100];
    // const char *name;
    student(int r, int c, char s, const char *n)
    {
        roll = r;
        sec = s;
        cls = c;
        strcpy(name, n);
        // name = n;
    }
};
int main()
{
    student *karim = new student(39, 6, 'A', "Karim Khan");
    student *Alone = new student(33, 9, 'B', "Alone Alas");
    
    cout<<(*Alone).name<<endl;
    cout<<karim->name<<endl;
    delete Alone;
    cout<<Alone->cls;
    return 0;
}