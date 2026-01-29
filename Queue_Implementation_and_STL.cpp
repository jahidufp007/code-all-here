/*when use singly linked list for Queue*/

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// class myQueue
// {
// public:
//     Node *head = NULL;
//     Node *tail = NULL;
//     int sz=0;
//     void push(int val)
//     {
//          sz++;
//         Node *newnode = new Node(val);
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         tail->next = newnode;
//         tail = newnode;
//     }
//     void pop()
//     {
//         sz--;
//         Node *deletenode = head;
//         head = head->next;
//         delete deletenode;
//         if (head == NULL)
//         {
//             tail = NULL;
//         }
//     }
//     int front()
//     {
//         return head->val;
//     }
//     int back()
//     {
//         return tail->val;
//     }
//     int size()
//     {
//       return sz;
//      }
//     bool empty()
//     {
//         return head == NULL;
//     }
// };
// int main()
// {
//     myQueue q;
//     int n;
//     cin>>n;
//     for (int j = 0; j < n; j++)
//     {
//         int val;
//         cin >> val;
//         q.push(val);
//     }

//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }

 

//     return 0;
// }


/*When use Double linked list for Queue*/
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
// class myQueue
// {
// public: 
// Node* head=NULL;
// Node* tail=NULL;
// int sz=0;
// void push(int val)
// {
//     sz++;
//     Node* newnode = new Node(val);
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
// void pop()
// {
//     sz--;
//     Node* deletenode=head;
//     head=head->next;
//     delete deletenode;
//     if(head==NULL)
//     {
//         tail=NULL;
//         return ;
//     }
//     head->prev=NULL;
// }
// int front()
// {
//     return head->val;
// }
// int back()
// {
//     return tail->val;
// }
// int size()
// {
//     return sz;
// }
// bool empty()
// {
//     return head==NULL;
// }
// };
// int main()
// {
//  myQueue q;
//  int n;cin>>n;
//  for(int j=0; j<n; j++)
//  {
//     int val; cin>>val;
//     q.push(val);
//  }

//  while(!q.empty())
//   {
//     cout<<q.front()<<" ";
//     q.pop();
//   }
//     return 0;
// }


/*when use STL list for Queue*/
// #include <bits/stdc++.h>
// using namespace std;
// class myQueue 
// {
// public:
// list<int> l;
// void push(int val)
// {
//     l.push_back(val);
// }
// void pop()
// {
//     l.pop_front();
// }
// int front()
// {
//     return l.front();
// }
// int back()
// {
//     return l.back();
// }
// int size()
// {
//     return l.size();
// }
// bool empty()
// {
//     return l.empty();
// }
// };
// int main()
// {
// myQueue q;
// int n;cin>>n;
// for(int j=0; j<n; j++)
// {
//     int val;cin>>val;
//     q.push(val);
// }

// while(!q.empty())
// {
//     cout<<q.front()<<" ";
//     q.pop();
// }
  
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{

  queue<int> q;
  int n ; cin>>n;
  for(int j=0; j<n; j++)
  {
    int val;cin>>val;
    q.push(val);
  }
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
    return 0;
}