#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={3,5,3,4,2,6,5,3,2,7,5,8};
    replace(v.begin(), v.end(), 3, 30);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int n;
    cin>>n;
    vector<int>v1={2,4,5,4,6,3,7,4,7,4,3,2,2};
    auto it = find(v1.begin(), v1.end(), n);
    if(it==v1.end()) cout<<"Not found";
    else cout<<"Found";
    
    return 0;
}