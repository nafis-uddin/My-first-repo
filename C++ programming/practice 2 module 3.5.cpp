#include <bits/stdc++.h>
using namespace std;
class cricketer
{
    public:
    int jersey; 
    string name;
};
int main()
{
    cricketer *dhoni = new cricketer;
    dhoni->jersey = 7;
    dhoni->name = "India";

    cricketer *kohli = new cricketer;

    kohli->jersey = dhoni->jersey;
    kohli->name = dhoni->name;

    delete dhoni;
    
    cout<<kohli->jersey<<endl<<kohli->name;

    return 0;
}
