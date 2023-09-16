// #include <iostream>
// using namespace std;
// int swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }


#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    swap(a,b);          //this is not applicable for array
    cout<<a<<" "<<b;
    return 0;
}
