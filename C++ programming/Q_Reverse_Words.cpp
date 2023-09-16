#include <bits/stdc++.h>
using namespace std;
void hello(stringstream & ss)
{
    string word;
    int flag = 0;
    while(ss>>word)
    {
        if(flag == 1)
        {
            cout<<" ";
        }
        reverse(word.begin(), word.end());  
        cout<<word;
        flag = 1;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    hello(ss);
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// void hello(string s)
// {
//     // reverse(s.begin(), s.end());
//     for(char c:s)
//     {
//         if(isalpha(c))
//         {
//             hello(s);
//             cout<<c;
//         }
//         else
//         {
//             cout<<" ";
//         }
//     } 
// }
// int main()
// {
//     string s;
//     getline(cin,s);
//     hello(s);
//     return 0;
// }