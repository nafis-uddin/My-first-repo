#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node* head = new Node(30);
    Node* a = new Node(44);

    head->next = a;

    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val;
    return 0;
}