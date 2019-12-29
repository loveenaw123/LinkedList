#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
      int data;
      Node *next;
};
void push(Node** head_ref,int new_data)
{
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = (*head_ref);
   (*head_ref) = new_node;
}
void print(Node* head_ref)
{
    Node* temp = head_ref;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    int n;
    cin>>n;
    int k;
    struct Node* head_ref = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        push(&head_ref,k);
    }    
    print(head_ref);
} 
