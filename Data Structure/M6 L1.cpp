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

void Insert_Tail_Node(Node*& head, int v)
{
    Node* newnode = new Node(v);
    while(head == NULL)
    {
        head = newnode;
        return ;
    }
    Node* tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void Print_Linked_list(Node* head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<"Your Linked list: ";
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        cout<<"Option 1: Insert tail node"<<endl;
        cout<<"Option 2: Print linked list"<<endl;
        cout<<"Option 3: Terminate"<<endl;
        int opt; 
        cin>>opt;
        if(opt == 1)
        {
            cout<<"Enter Value: ";
            int v;
            cin>>v;
            cout<<endl;
            Insert_Tail_Node(head, v);
        }
        else if(opt == 2)
        {
            Print_Linked_list(head);
        }
        else if(opt == 3)
        {
            break;
        }
    }    
    return 0;
}