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
    Node* head = new Node(33);
    Node* a = new Node(22);
    Node* b = new Node(25);
    Node* c = new Node(99);

    head->next = a;
    a->next = b;
    b->next = c;

    Node* tmp = head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
    tmp = head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    return 0;
}