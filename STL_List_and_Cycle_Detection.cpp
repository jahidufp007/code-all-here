// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     list<int>l ={10,20,30,40,50};
//     vector<int> v={60,70,80,90,100};
//     int arr[5]={110,120,130,140,150};

//   list<int>mylist(v.begin(),v.end());
// //   cout<<mylist.size();
// //   cout<<endl<< *mylist.begin();
// for(auto it=mylist.begin(); it != mylist.end(); it++)
// {
//     cout<<*it<<" ";
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l={10,20,30,40,55,58};
// //   l.clear();
//   cout<<l.size()<<endl;
//   if(l.empty())cout<<"Yes";
//   l.resize(7,1);
//   for(auto v1 : l)
//   {
//     cout<<v1<<" ";
//   }
//   cout<<endl<<l.max_size();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l={1,2,3,4,5};
//   list<int> l2; /*or*/ //l2=l;
//     l.push_front(5);
//   l2.assign(l.begin(),l.end());
//   l2.push_back(1);
//   l2.pop_back();
//   l2.pop_front();
//   l2.insert(next(l2.begin(),1),0);

//   for(auto c1 : l2)
//   {
//     cout<<c1<<" ";
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l={10,20,30,40,48,50,60,70};
//   l.erase(next(l.begin(),3));
//   replace(l.begin(),l.end(),48,40);
//  auto it= find(l.begin(),l.end(),40);
//  (it==l.end())? cout<<"Not Found" : cout<<"Found";
//   for(auto it : l)
//   {
//     cout<<it<<" ";
//   }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l={10,50,18,25,65,20,10,20,25,20,18};
//   l.remove(18);
//   l.sort(greater<int>());
// l.unique();
// l.reverse();
//   for(auto it1 : l){
//     cout<<it1<<" ";
//   }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l={1,2,3,4,5,6,7,8,9,10};
//   cout<<l.back()<<" ";
//   cout<<*l.begin();
//   cout<<l.front();
//     return 0;
// }


/*I have some problem*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
  public: 
  int val;
  Node* next;
Node(int val)
{
    this->val=val;
    this->next=NULL;
}
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
void revesre_linked_list(Node* &head,Node* &tail,Node* tmp)
{
    if(tmp->next==NULL)
    {
        head=tmp;
        return ;
    }
    revesre_linked_list(head,tail,tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL;
    tail=tmp;
    
}
int main()
{
Node* head=NULL;
Node* tail=NULL;
while(true)
{
    int val;cin>>val;
    if(val==-1) break;
    insert_at_tail(head,tail,val);
}
revesre_linked_list(head,tail,head);
  print_linked_list(head);
    return 0;
}


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
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//     Node* newnode=new Node(val);
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return ;
//     }
//     tail->next=newnode;
//     newnode->prev=tail;
//     tail=newnode;
// }
// void print_linked_list(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }
// void reverse_doubly_linked_list_print(Node* head,Node* tail)
// {
//     for(Node* j=head, *i=tail; j!=i && j->prev!=i; j=j->next,i=i->prev)
//     {
//         swap(j->val,i->val);
//     }
// }
// int main()
// {
// Node* head=NULL;
// Node* tail=NULL;
// while(true)
// {
//     int val; cin>>val;
//     if(val==-1)  break;
//     insert_at_tail(head,tail,val);
// }
// reverse_doubly_linked_list_print(head,tail);
// print_linked_list(head);
  
//     return 0;
// }


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
// int main()
// {

//   Node* head=new Node(10);
//   Node* a=new Node(20);
//   Node* b=new Node(30);
//   Node* c=new Node(40);
//   Node* d=new Node(50);
//   Node* e=new Node(60);
//   Node* f=new Node(70);
//   Node* g=new Node(80);

//   head->next=a;
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   e->next=f;
//   f->next=g;
//   g->next=f;

//   bool flag=false; 
//    Node* fast=head;
//     Node* slow=head;
//   while(fast !=NULL && fast->next !=NULL )
//   {
//      slow=slow->next;
//     fast=fast->next->next;
 
//     if(fast==slow)
//     {
//        flag=true;
//        break ;
//     }

//   }
//   (flag==true)?cout<<"YES": cout<<"NO";
//     return 0;
// }