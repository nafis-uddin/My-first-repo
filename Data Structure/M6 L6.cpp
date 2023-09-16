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
void Insert_at_head(Node*& head, int v)
{
    Node* newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void Delete_position(Node* head, int pos)
{
    Node* tmp = head;
    for(int i = 1; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void Delete_head(Node*& head)
{
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
}
int main()
{
    Node* head = NULL;
    cout<<"Option 1: Insert tail node"<<endl;
    cout<<"Option 2: Print linked list"<<endl;
    cout<<"Option 3: Insert new node"<<endl;
    cout<<"Option 4: Insert at head"<<endl;
    cout<<"Option 5: Delete position"<<endl;
    cout<<"Option 6: Delete head"<<endl;
    cout<<"Option 7: Terminate"<<endl;
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
            if(pos == 0)
            {
                Insert_at_head(head, v);
            }
            else 
            {
                Insert_new_node(head, pos, v);
            }
        }
        else if(opt == 4)
        {
            cout<<"Enter head value: ";
            int v;
            cin>>v;
            cout<<endl;
            Insert_at_head(head, v);
        }
        else if(opt == 5)
        {
            cout<<"Enter delete position: ";
            int pos;
            cin>>pos;
            cout<<endl;
            if(pos == 0)
            {
                Delete_head(head);
            }
            else
            {
                Delete_position(head, pos);
            }
        }
        else if(opt == 6)
        {
            Delete_head(head);
        }
        else if(opt == 7)
        {
            break;
        }
    }
    return 0;
}