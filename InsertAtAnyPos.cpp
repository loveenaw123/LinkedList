#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
      int data;
      Node *next;
};
void insertion(Node **head_ref,int data,int pos)
{
	struct Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	if(pos==1)
	{
		temp1->next = *head_ref;
        *head_ref = temp1;
         return;
	}
	Node* temp2 = *head_ref;
   for (int i = 0; i < pos-2; i++)
   {
    temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp1;
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
    int k,pos;
    struct Node* head_ref = NULL;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        cin>>pos;
        insertion(&head_ref,k,pos);
        cout<<"List is : ";
        print(head_ref);
        cout<<"\n";
    }    
} 
