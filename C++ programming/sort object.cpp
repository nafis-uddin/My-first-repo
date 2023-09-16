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
    for(int i = 0 ; i<3; i++)
    {
        getline(cin, a[i].name);
        cin>>a[i].rank>>a[i].points;
        getchar();
    }
    
    for(int i =0; i<2; i++)
    {
        for(int j = i+1; j<3; j++)
        {
            if(a[i].rank>a[j].rank)     // a[i].rank<a[j].rank  for degrade ranking
            {
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = 0; i<3; i++)
    {
        cout<<a[i].rank<<" : "<<a[i].name<<endl;
    }
    return 0;
}