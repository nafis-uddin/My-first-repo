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
void Insert_at_tail(Node* & head, int v)
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
int main()
{
    Node* head = NULL;
    int v;
    int cnt = 0;
    while(true)
    {
        cin>>v;
        if(v== -1) break;
        Insert_at_tail(head, v);
        cnt++;
    }
    Node* tmp = head;
    int mid;
    if(cnt%2==0)
    {
        mid = cnt/2;
        for(int i = 1; i<mid; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    else
    {
        mid = (cnt+1)/2;
        for(int i = 1; i<mid; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val;
    }
    return 0;
}