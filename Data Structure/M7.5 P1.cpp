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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int v1;
    int cnt1 = 0;
    while(true)
    {
        cin>>v1;
        if(v1== -1) break;
        Insert_at_tail(head1, tail1, v1);
        cnt1++;
    }
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int v2;
    int cnt2 = 0;
    while(true)
    {
        cin>>v2;
        if(v2 == -1) break;
        Insert_at_tail(head2, tail2, v2);
        cnt2++;
    }
    (cnt1==cnt2)? cout<<"YES" : cout<<"NO";
    return 0;
}