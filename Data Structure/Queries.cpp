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
    cout<<head->val<<" ";
    if(tmp->next == NULL)
    {
        cout<<tmp->val;
    }
    else 
    {
        while(tmp->next!=NULL)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val;
    }
    cout<<endl;
}
void Insert_at_tail(Node*& head, Node*& tail, int v)
{
    Node* newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        Print_linked_list(head);
        return;
    }
    tail->next = newnode;
    tail = newnode;
    Print_linked_list(head);
}
void Insert_at_head(Node*& head, Node*& tail, int v)
{
    Node* newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        Print_linked_list(head);
        return;
    }
    newnode->next = head;
    head = newnode;
    Print_linked_list(head);
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    for(int i = 1; i<=q; i++)
    {
        int pos, v;
        cin>>pos>>v;
        if(pos == 1)
        {
            Insert_at_tail(head, tail, v);
        }
        else if(pos == 0)
        {
            Insert_at_head(head, tail, v);
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;

//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void Print_linked_list(Node* head, Node* tail) {
//     if (head == NULL) {
//         cout << "Linked list is empty" << endl;
//         return;
//     }

//     cout << head->val << " " << tail->val << endl;
// }

// void Insert_at_tail(Node*& head, Node*& tail, int v) {
//     Node* newnode = new Node(v);
//     if (head == NULL) {
//         head = newnode;
//         tail = newnode;
//         Print_linked_list(head, tail);
//         return;
//     }
//     tail->next = newnode;
//     tail = newnode;
//     Print_linked_list(head, tail);
// }

// void Insert_at_head(Node*& head, Node*& tail, int v) {
//     Node* newnode = new Node(v);
//     if (head == NULL) {
//         head = newnode;
//         tail = newnode;
//         Print_linked_list(head, tail);
//         return;
//     }
//     newnode->next = head;
//     head = newnode;
//     Print_linked_list(head, tail);
// }

// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;
//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++) {
//         int pos, v;
//         cin >> pos >> v;
//         if (pos == 1) {
//             Insert_at_tail(head, tail, v);
//         } else if (pos == 0) {
//             Insert_at_head(head, tail, v);
//         }
//     }
//     return 0;
// }
