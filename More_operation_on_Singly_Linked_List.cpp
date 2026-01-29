// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node* next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//   Node* newnode = new Node(val);
//  Node* temp=tail;
//  if(head==NULL)
//         {
//          head=newnode;
//          tail=newnode;
//          return ;
//        }
// temp->next=newnode;
// tail=newnode;
// }

// void Link_List_print(Node* head)
// {
//   Node* temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }
// int main()
// {

//   Node* head=NULL;
//    Node* tail=NULL;
//    while(true)
//    {

//    int val;cin>>val;
//    if(val==-1)break;
//   insert_at_tail(head,tail,val);
//    }
//   Link_List_print(head);

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void rec(int i, int n)
// {
//     // base case
//     if (i > n)
//     {
//         return;
//     }
//     rec(i + 1, n);
//     cout << i << endl;
// }
// int main()
// {

//     int n;
//     cin >> n;
//     rec(1, n);

//     return 0;
// }



/*This is use when print reverse  Singly Linked List*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node* next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//   Node* newnode = new Node(val);
//  Node* temp=tail;
//  if(head==NULL)
//         {
//          head=newnode;
//          tail=newnode;
//          return ;
//        }
// temp->next=newnode;
// tail=newnode;
// }

// /*when reverse print*/
// void Link_List_print_reverse(Node* temp)
// {
//    if(temp==NULL) 
//    {
//     return ;
//    }

//    Link_List_print_reverse(temp->next);
//    cout<<temp->val<<endl;
// }
// int main()
// {

//   Node* head=NULL;
//    Node* tail=NULL;
//    while(true)
//    {

//    int val;cin>>val;
//    if(val==-1)break;
//   insert_at_tail(head,tail,val);
//    }
// Link_List_print_reverse(head);


//   return 0;
// }



/*delete head waise*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node* next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//   Node* newnode = new Node(val);
//  Node* temp=tail;
//  if(head==NULL)
//         {
//          head=newnode;
//          tail=newnode;
//          return ;
//        }
// temp->next=newnode;
// tail=newnode;
// }

// void Link_List_print(Node* head)
// {
//   Node* temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }

// void delete_at_head(Node* &head)
// {
//     Node* deletnode=head;
//     head=head->next;
//     delete deletnode;
// }
// int main()
// {

//   Node* head=NULL;
//    Node* tail=NULL;
//    while(true)
//    {

//    int val;cin>>val;
//    if(val==-1)break;
//   insert_at_tail(head,tail,val);
//    }
//    delete_at_head(head);
//   Link_List_print(head);

//   return 0;
// }



/*delete possion wiase*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node* next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//   Node* newnode = new Node(val);
//  Node* temp=tail;
//  if(head==NULL)
//         {
//          head=newnode;
//          tail=newnode;
//          return ;
//        }
// temp->next=newnode;
// tail=newnode;
// }

// void Link_List_print(Node* head)
// {
//   Node* temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }

// void delete_at_any_pos(Node* &head,int idx)
// {
//     Node* temp=head;
//     for(int j=0;j<idx; j++)
//     {
//       temp=temp->next;
//     }
//     Node* deleteany=temp->next;
//     temp->next=temp->next->next;
//     delete deleteany;
// }
// int main()
// {

//   Node* head=NULL;
//    Node* tail=NULL;
//    while(true)
//    {

//    int val;cin>>val;
//    if(val==-1)break;
//   insert_at_tail(head,tail,val);
//    }
//    delete_at_any_pos(head,2);
//   Link_List_print(head);

//   return 0;
// }


/*when delete tail value*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node* next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//   Node* newnode = new Node(val);
//  Node* temp=tail;
//  if(head==NULL)
//         {
//          head=newnode;
//          tail=newnode;
//          return ;
//        }
// temp->next=newnode;
// tail=newnode;
// }

// void Link_List_print(Node* head)
// {
//   Node* temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }

// void delete_at_tail(Node* &head,Node* &tail,int idx)
// {
//     Node* temp=head;
//     for(int j=0;j<idx; j++)
//     {
//       temp=temp->next;
//     }
//     Node* deleteany=temp->next;
//     temp->next=temp->next->next;
//     delete deleteany;
//     tail=temp;
// }
// int main()
// {

//   Node* head=NULL;
//    Node* tail=NULL;
//    while(true)
//    {

//    int val;cin>>val;
//    if(val==-1)break;
//   insert_at_tail(head,tail,val);
//    }
//    delete_at_tail(head,tail,3);
//   Link_List_print(head);

//   return 0;
// }


/*Sort Singly Linked List*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node* next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//   Node* newnode = new Node(val);
//  Node* temp=tail;
//  if(head==NULL)
//         {
//          head=newnode;
//          tail=newnode;
//          return ;
//        }
// temp->next=newnode;
// tail=newnode;
// }

// void Link_List_print(Node* head)
// {
//   Node* temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }

// void sort_node(Node *&head)
// {

//   for (Node* j = head; j->next != NULL; j = j->next)
//   {
//     for (Node* i = j->next; i != NULL; i = i->next)
//     {
//       if (j->val > i->val)
//       {
//         swap(j->val, i->val);
//       }
//     }
//   }
// }
// int main()
// {

//   Node* head=NULL;
//    Node* tail=NULL;
//    while(true)
//    {

//    int val;cin>>val;
//    if(val==-1)break;
//   insert_at_tail(head,tail,val);
//    }
//   sort_node(head);
//   Link_List_print(head);

//   return 0;
// }




/*delet mintimpel val*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newnode = new Node(val);
  Node *temp = tail;
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
    return;
  }
  temp->next = newnode;
  tail = newnode;
}

void print_linked_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
void deleteany(Node *&head, int val)
{

  if (head == NULL)
  {
    return;
  }
  /*delet head*/
  if (val == 1)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
  }
  Node *curr = head;
  for (int j = 1; j < val - 1 && curr->next != NULL; j++)
  {
    curr = curr->next;
  }
  if (curr->next == NULL)
  {
    return;
  }
  Node *temp = curr->next;
  curr->next = temp->next;
  delete temp;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  while (true)
  {
    int val;
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, tail, val);
  }

  Node *curr = head;

  while (curr)
  {
    Node *prev = curr;
    Node *temp = curr->next;

    while (temp)
    {
      if (temp->val == curr->val)
      {
        prev->next = temp->next;
        delete temp;
        temp = prev->next;
      }
      else
      {
        prev = temp;
        temp = temp->next;
      }
    }
    curr = curr->next;
  }

  print_linked_list(head);

  return 0;
}