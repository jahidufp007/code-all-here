/*create a Doubly Linked List*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//   public: 
//   int val;
//   Node* next;
//   Node* prev;
// Node(int val)
// {
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
// }
// };
// int main()
// {
//     Node* head = new Node(10);
//     Node* a = new Node(20);
//     Node* tail = new Node(30);

//     head->next=a;
//     a->prev= head;
//     a->next=tail;
//     tail->prev=a;

  
//     return 0;
// }




/*print forward Doubly linked list */
#include <bits/stdc++.h>
using namespace std;
class Node
{
  public: 
  int val;
  Node* next;
  Node* prev;
Node(int val)
{
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
}
};
void print_forwar(Node* head)
{
    Node* temp= head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

void print_backword(Node* tail)
{
    Node* tamp=tail;
    while(tamp != NULL)
    {
         cout<<tamp->val<<" ";
         tamp= tamp->prev;
    }
}
void insert_at_head(Node* &head,Node* &tail,int val)
{
  Node* newnode= new Node(val);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return ;
  }
  newnode->next=head;
head->prev=newnode;
head= newnode;
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insert_at_any_possion(Node* head,int idx,int val)
{
    Node* newnode=new Node(val);
    Node* temp=head;
    for(int j=0; j<idx;j++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
     temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
void delet_at_head(Node* &head, Node* &tail)
{
    Node* delet_head=head;
    head=head->next;
    delete delet_head;
    if(head==NULL)
    {
        tail=NULL;
        return ;
    }
    head->prev=NULL;
}
void delet_at_tail(Node* &head, Node* &tail)
{
    Node* delet_tail=tail;
    tail=tail->prev;
    delete delet_tail;
    if(tail==NULL)
    {
        head=NULL;
        return ;
    }
    tail->next=NULL;
}
void delete_any_pos(Node* head,int idx)
{
    Node* temp=head;
    for(int j=0; j<idx; j++)
    {
        temp=temp->next;
    }
    Node* delete_any=temp->next;
      temp->next=temp->next->next;
      temp->next->prev=temp;
      delete delete_any;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
   
    head->next=a;
    a->prev= head;
    a->next=tail;
    tail->prev=a;


insert_at_head(head,tail,0);
insert_at_tail(head, tail,40);
 insert_at_any_possion(head,3,-40);
 delet_at_head(head,tail);
 delet_at_tail(head,tail);
 delete_any_pos(head,1);

// print_backword(tail);
   print_forwar(head);
    return 0;
}