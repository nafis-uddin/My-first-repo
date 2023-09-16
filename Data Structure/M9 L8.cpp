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
        cout<<"Head is unavaible"<<endl;
        return;
    }
    Node* tmp = head;
    while(tmp!=NULL)
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
        cout<<"Tail is unavailable"<<endl;
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
void Delete_tail(Node*& head, Node*& tail)
{
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    Node* deletenode = tail;
    tail = tail->pre;
    delete deletenode;
    tail->next = NULL;
}
void Delete_head(Node*& head, Node*& tail)
{
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    Node* deletenode  = head;
    head = head->next;
    delete deletenode;
    head->pre = NULL;
}
void Delete_position(Node*head, int pos)
{
    Node* tmp = head;
    for(int i = 1; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->pre = tmp;
    delete deletenode;
}
int main()
{
    Node * head = NULL;
    Node* tail = NULL;
    int v;
    int cnt = 0;
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        Insert_at_tail(head, tail, v);
        cnt++;
    }
    for(int i= 1; i<=4; i++)
    {
        int pos;
        cin>>pos;
        if(pos>cnt)
        {
            cout<<"Position unavailable"<<endl;
            continue;
        }
        else if(pos==1)
        {
            Delete_head(head, tail);
        }
        else if(pos == cnt)
        {
            Delete_tail(head, tail);
        }
        else
        {
            Delete_position(head, pos);
        }
        Print_doubly_list(head);
    }
    cout<<endl;
    Print_doubly_list_reverse(tail);
    return 0;
}
