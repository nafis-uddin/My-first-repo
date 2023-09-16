#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int points;
    int rank;
    string name;
};
int main()
{
    student a[3];
    for(int i =  0; i<3; i++)
    {
        getline(cin, a[i].name);
        cin>>a[i].rank>>a[i].points;
        getchar();
    }

    student mx;
    mx.points = INT_MIN;
    for(int i = 0; i<3; i++)
    {
        if(a[i].points>mx.points)
        {
            mx = a[i];
        }
    }
    cout<<mx.points<<" : "<<mx.name<<endl;

    student mn;
    mn.points = INT_MAX;
    for(int i = 0; i<3; i++)
    {
        if(a[i].points<mn.points)
        {
            mn = a[i];
        }
    }
    cout<<mn.points<<" : "<<mn.name<<endl;
    return 0;
}