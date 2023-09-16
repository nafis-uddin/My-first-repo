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
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Insert_at_tail(Node*& head, int v)
{
    Node* newnode = new Node(v);
    while(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void Insert_at_newnode(Node* head, int pos, int v)
{
    Node* newnode = new Node(v);
    Node* tmp = head;
    for(int i = 1; i<pos; i++)          // i<pos
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    Print_linked_list(head);
}
void Insert_at_head(Node*& head, int v)
{
    Node* newnode = new Node(v);
    newnode->next = head;
    head = newnode;
    Print_linked_list(head);
}
int main()
{
    Node* head = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v== -1) break;
        Insert_at_tail(head, v);
    }
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int pos, v;
        cin>>pos>>v;
        if(pos == 0)
        {
            Insert_at_head(head, v);
        }
        else 
        {
            Insert_at_newnode(head, pos, v);
        }
    }
    return 0;
}