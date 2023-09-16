#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    char sec;
    int marks;
    // const char *name;
    string name;
    student(int r, int c, int m, char s, string n)
    {
        roll = r;
        cls = c; 
        sec = s;
        marks = m; 
        name = n;
    }
};
int main()
{
    student rahim(34, 6, 77, 'A', "Rahim");
    student karim(23, 6, 92, 'A', "Kaim");
    student shafin(30, 6, 95, 'A', "Shafin");

    // int maximum = max(shafin.marks, rahim.marks);
    // int ans = max(maximum, karim.marks);
    // cout<<ans<<endl;
    
    int maxx = 0;
    // const char *sn;     //sn = highest marks achieved student name
    string sn;
    student* classmates[4] = {&karim, &rahim, &shafin};
    for(int i = 0; i<3; i++)
    {
        if(classmates[i]->marks > maxx)
        {
            maxx = classmates[i]->marks;
            sn = classmates[i]->name;
        }
    }
    cout<<maxx<<endl<<sn;
    return 0;
}

// int maxx = 0;
// const char*sn;
// student *hello[3] = {&karim, &rahim, &shafin};
// for(int i =0; i<3; i++)
// {
//     if(hello[i]->marks > max)
//     {
//         maxx = hello[i]->marks;
//         sn = hello[i]->name;
//     }
//     cout<<maxx<<endl<<sn;
// }