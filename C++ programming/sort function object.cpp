#include <bits/stdc++.h>
using namespace std;
class player
{
    public:
    int points;
    int rank;
    string name;
};
    bool cmp(player a, player b)   //remember place i mean outside of ; and before int main
    {
        if(a.points>b.points) return true;
        else return false;
    }
int main()
{
    player a[3];
    for(int i = 0; i<3; i++)
    {
        getline(cin, a[i].name);
        cin>>a[i].rank>>a[i].points;
        getchar();
    }

    sort(a, a+3, cmp);

    for(int i = 0; i<3; i++)
    {
        cout<<a[i].rank<<" : "<<a[i].name<<endl;
    }
    return 0;
}