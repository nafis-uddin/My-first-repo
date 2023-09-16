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
    if(head == NULL)
    {
        cout<<"HEAD Null";
        return;
    }
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
    if(tail == NULL)
    {
        cout<<"Tail Null";
        return;
    }
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
void Insert_at_head(Node*& head, Node*& tail, int v)
{
    Node* newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
}
void Insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->pre = newnode;
    tmp->next = newnode;
    newnode->pre = tmp;      
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int cnt = 0;
    while(true)
    {
        int v;
        cin>>v;
        if(v== -1) break;
        cnt++;
        Insert_at_tail(head, tail, v);
    }
    for(int i = 1; i<=4; i++)
    {
        int pos, v;
        cin>>pos>>v;
        if(pos>cnt+1)
        {
            cout<<"Invalid"<<endl;
            continue;   // to prevent printing 
        }
        else if(pos == 1)
        {
            Insert_at_head(head, tail, v);
        }
        else if(pos == cnt+1)
        {
            Insert_at_tail(head, tail, v);
        }
        else
        {
            Insert_at_position(head, pos, v);
        }
        Print_doubly_list(head);
    }
    cout<<endl;
    Print_doubly_list_reverse(tail);
}
