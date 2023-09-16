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
void Insert_new_node(Node* head, int pos, int v)
{
    Node* newnode = new Node(v);
    Node* tmp = head;
    for(int i = 1; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
int main()
{
    Node* head = NULL;
    cout<<"Option 1: Insert tail node"<<endl;
    cout<<"Option 2: Print linked list"<<endl;
    cout<<"Option 3: Insert new node"<<endl;
    cout<<"Option 4: Terminate"<<endl;
    while(true)
    {
        cout<<"Choose option: "<<endl;
        int opt;
        cin>>opt;
        if(opt == 1)
        {
            cout<<"Enter value: ";
            int v;
            cin>>v;
            cout<<endl;
            Insert_tail_node(head, v);
        }
        else if(opt == 2)
        {
            Print_linked_list(head);
        }
        else if(opt == 3)
        {
            cout<<"Enter Position of the node: ";
            int pos;
            cin>>pos;
            cout<<endl;
            cout<<"Enter value of the node: ";
            int v;
            cin>>v;
            cout<<endl;
            Insert_new_node(head, pos, v);
        }
        else if(opt == 4)
        {
            break;
        }
    }
    return 0;
}