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
    bool flag = false;
    int a[101] = {0};
    for(int i = 0; i<cnt; i++)
    {
        a[tmp->val]++;
        if(a[tmp->val]> 1)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
    }
    (flag==true)? cout<<"YES" : cout<<"NO";
    return 0;
}