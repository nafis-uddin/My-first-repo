#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    char name[100];
    char sec;
};
int main()
{
    student rahim;
    rahim.roll = 23;
    rahim.sec = 'A';
    rahim.cls = 6;
    char nm1[100] = "Rahim Khan";
    strcpy(rahim.name, nm1);

    student karim;
    karim.roll = 25;
    karim.sec = 'B';
    karim.cls = 9;
    char nm2[100] = "Karim Uddin";
    strcpy(karim.name, nm2);

    cout<<karim.name<<endl<<rahim.name<<endl;
    cout<<karim.sec<<" "<<rahim.sec<<endl;
    cout<<karim.roll<<" "<<karim.roll;
    return 0;
}