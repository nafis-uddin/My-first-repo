#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void Print_doubly_list(Node* head)
{
    Node* tmp = head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Print_doubly_list_reverse(Node* tail)
{
    Node* tmp = tail;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
    }
    cout<<endl;
}
void Insert_at_tail(Node*& head, Node*& tail, int v)
{
    Node* newnode = new Node(v);
    if(tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
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
        if(v== -1) break;
        Insert_at_tail(head, tail, v);
    }
    Print_doubly_list(head);
    Print_doubly_list_reverse(tail);
    return 0;
}