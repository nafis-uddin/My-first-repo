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
void Print_linked_list(Node* head)
{
    Node* tmp = head; 
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
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
    Node * head = NULL;
    Node* tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v== -1) break;
        Insert_at_tail(head, tail, v);
    }
    for(Node* i = head; i->next!= NULL; i = i->next)
    {
        for(Node* j = i->next; j!=NULL; j = j->next)
        {
            if(i->val<j->val)
            {
                swap(j->val, i->val);
            }
        }
    }
    Print_linked_list(head);
    return 0;
}