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
void Insert_tail_node(Node*& head, int v)
{
    Node* newnode = new Node(v);
    while(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void Print_linked_list(Node* head)
{
    Node* tmp = head;
    cout<<"Your linked list: ";
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void Insert_at_head(Node*& head, int v)
{
    Node* newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
int main()
{
    Node* head = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        Insert_tail_node(head, v);        
    }
    Print_linked_list(head);
    return 0;
}