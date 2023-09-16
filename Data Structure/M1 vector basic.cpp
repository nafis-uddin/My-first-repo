#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(5,1);
    vector<int>v2(v);

    // vector<int>v2 = {3, 5, 3, 7};

    // int a[5] = {3, 6, 2, 4, 5};
    // vector<int>v2(a, a+5);

    cout<<v2.size()<<endl;
    for(int i = 0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}
