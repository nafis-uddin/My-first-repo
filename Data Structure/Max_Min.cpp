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
void Insert_at_tail(Node*& head, Node*& tail, int v)
{
    Node* newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode; 
    tail = newnode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        Insert_at_tail(head, tail, v);
    }
    Node* tmp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(Node* i = head;  i!=NULL; i = i->next)
    {
        if(mx<i->val)
        {
            mx = i->val;
        }
        if(mn>i->val)
        {
            mn = i->val;
        }
    }
    cout<<mx<<" "<<mn;
    return 0;
}