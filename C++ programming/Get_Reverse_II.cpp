#include <bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
    }

    // it won't work, cause we can't swap for two times or more
    // for(int i = 0; i<n/2; i++)           
    // {
    //     for(int j = n-1; j>=n/2; j--)
    //     {
    //         int tmp = a[i].id;
    //         a[i].id = a[j].id;
    //         a[j].id = tmp;
    //     }
    // }

    // int i = 0, j = n-1;
    // while(i<j)
    // {
    //     int tmp = a[i].id;
    //         a[i].id = a[j].id;
    //         a[j].id = tmp;
    //         i++;
    //         j--;
    // }

    int i = 0, j = n-1;
    for(; i<j;)
    {
        int tmp = a[i].id;
        a[i].id = a[j].id;
        a[j].id = tmp;
        i++;
        j--;
    }
    for(int i = 0; i<n; i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}