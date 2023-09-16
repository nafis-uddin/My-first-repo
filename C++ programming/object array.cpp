// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     int cls;
//     int marks;
//     string name;
// };
#include <bits/stdc++.h>
using namespace std;
class player
{
    public:
    int point;
    int catagory; 
    string name;
};
int main()
{
    player a[3];
    for(int i = 0; i<3; i++)
    {
        getline(cin, a[i].name);
        cin>>a[i].catagory>>a[i].point;
        getchar();

        cout<<a[i].point<<" : "<<a[i].name<<endl;
    }
    return 0;
}