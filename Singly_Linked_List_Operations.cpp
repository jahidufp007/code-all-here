// #include <bits/stdc++.h>
// using namespace std;
// void fun(int* p)
// {
//     // *p=15;
//     int y=10;
//     *p=y;
// }
// int main()
// {

//   int x=5;
//   int* p=&x;
//   *p=x;                        // "&" when this is not useing but code work...
//   fun(p);
//   cout<<*p;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node *next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_head(Node *&head, int val)
// {
//   Node *newnode = new Node(val);
//   newnode->next = head;
//   head = newnode;
// }

// void Link_List_print(Node *head)
// {
//   Node *temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }
// int main()
// {

//   Node *head = new Node(10);
//   Node *a = new Node(20);
//   Node *b = new Node(30);

//   head->next = a;
//   a->next = b;
//   insert_at_head(head, 100);
//   Link_List_print(head);

//   return 0;
// }


/*when insert value tail*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//   public: 
//   int val;
//   Node* next;
// Node(int val)
// {
//     this->val=val;
//     this->next=NULL;
// }
// };

// void insert_at_tail(Node* &head,int val)
// {
//       Node* newnode=new Node(val);
//        Node* temp=head;
//        if(head==NULL)
//        {
//         head=newnode;return ;
//        }
//        while(temp->next!=NULL)
//        {
//         temp=temp->next;
//        }
//        temp->next=newnode;
// }

// void Link_List_print(Node* head)
// {
//   Node* temp=head;
//   while(temp!=NULL)
//   {
//     cout<<temp->val<<endl;
//     temp=temp->next;
//   }
// }
// int main()
// {

//     Node* head= new Node(10);
//     Node* a=new Node(20);
//     Node* b=new Node(30);

//     head->next=a;
//     a->next=b;
//   insert_at_tail(head,40);
// Link_List_print(head);


//     return 0;
// }



/*When value inster in middle*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node *next;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_middle(Node *&head, int idx, int val)
// {
//   Node *newnode = new Node(val);
//   Node *temp = head;
  /* if(head==NULL)
//        {
//         head=newnode;return ;
//        }*/
//   for (int i = 1; i < idx; i++)
//   {
//     temp = temp->next;
//   }
//   newnode->next = temp->next;
//   temp->next = newnode;
// }

// void Link_List_print(Node *head)
// {
//   Node *temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->val << endl;
//     temp = temp->next;
//   }
// }
// int main()
// {

//   Node *head = new Node(10);
//   Node *a = new Node(20);
//   Node *b = new Node(30);

//   head->next = a;
//   a->next = b;
//   insert_at_middle(head, 1, 100);
//   Link_List_print(head);

//   return 0;
// }


/*When value inster tail*/
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

void insert_at_tail(Node* &head,Node* &tail,int idx, int val)
{
  Node* newnode = new Node(val);
 Node* temp=tail;
 if(head==NULL)
        {
         head=newnode;
         tail=newnode;
         return ;
       }
temp->next=newnode;
tail=newnode;
}

void Link_List_print(Node* head)
{
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
}
int main()
{

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* tail = new Node(30);

  head->next = a;
  a->next = tail;
  insert_at_tail(head,tail,1, 100);
  Link_List_print(head);
cout<<endl<<"tail: "<<tail->val;
  return 0;
}