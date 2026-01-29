// #include <bits/stdc++.h>
// using namespace std;
// class my_stack
// {
//     public: 
//    vector<int> v;
//    void push1(int val)
//    {
//     v.push_back(val);
//    }
//    void pop()
//    {
//     v.pop_back();
//    }
//    int top()
//    {
//     return v.back();
//    }
//    int siz()
//    {
//     return v.size();
//    }
//    bool empty()
//    {
//     return v.empty();
//    }
// };
// int main()
// {
// my_stack st;
// st.push1(10);
// st.push1(20);
// st.push1(30);
// st.push1(60);
// st.pop();
// cout<<st.top();
// st.pop();
// cout<<endl<<st.top();
// st.pop();
// cout<<endl<<st.top();
//   st.pop();
//   if(st.empty()==false)
// cout<<endl<<st.top();
//     return 0;
// }



/*when use vector*/
// #include <bits/stdc++.h>
// using namespace std;
// class my_stack
// {
//     public: 
//    vector<int> v;
//    void push1(int val)
//    {
//     v.push_back(val);
//    }
//    void pop()
//    {
//     v.pop_back();
//    }
//    int top()
//    {
//     return v.back();
//    }
//    int siz()
//    {
//     return v.size();
//    }
//    bool empty()
//    {
//     return v.empty();
//    }
// };
// int main()
// {
// my_stack st;
// int n;
// while(cin>>n)
// {
//     st.push1(n);
// }

// while(true)
// {
//     if(st.empty()==false)
//     {
//     cout<<st.top()<<endl;
//     st.pop();
// }
// else break;
// }
//     return 0;
// }



/* when use STL list*/
// #include <bits/stdc++.h>
// using namespace std;
// class my_stack
// {
//     public: 
//    list<int> l;
//    void push1(int val)
//    {
//     l.push_back(val);
//    }
//    void pop()
//    {
//     l.pop_back();
//    }
//    int top()
//    {
//     return l.back();
//    }
//    int siz()
//    {
//     return l.size();
//    }
//    bool empty()
//    {
//     return l.empty();
//    }
// };
// int main()
// {
// my_stack st;
// int n;
// while(cin>>n)
// {
//     st.push1(n);
// }

// while(true)
// {
//     if(st.empty()==false)
//     {
//     cout<<st.top()<<endl;
//     st.pop();
// }
// else break;
// }
//     return 0;
// }


/*when use Doubly linked list*/
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
// class my_stack
// {
//     public: 
// Node* head=NULL;
// Node* tail=NULL;
// int sz=0;
//    void push1(int val)
//    {
//     sz++;
//     Node* newnode=new Node(val);
//     if(head==NULL)
//     {
//       head=newnode;
//       tail=newnode;
//       return ;
//     }
//     tail->next=newnode;
//     newnode->prev=tail;
//     tail=newnode;
    
//    }
//    void pop()
//    {
//     sz--;
//     Node* deleteNode=tail;
//     tail=tail->prev;
//      delete deleteNode;
//      if(tail==NULL)
//      {
//         head=NULL;
//         return ;
//      }
//      tail->next=NULL;
//    }
//    int top()
//    {
//     return tail->val;
//    }
//    int siz()
//    {
//     return sz;
//    }
//    bool empty()
//    {
//     return head==NULL;
//    }
// };
// int main()
// {
// my_stack st;
// int n;
// while(cin>>n)
// {
//     st.push1(n);
// }

// while(true)
// {
//     if(st.empty()==false)
//     {
//     cout<<st.top()<<endl;
//     st.pop();
// }
// else break;
// }
//     return 0;
// }


/*use STL stack*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   stack<int> st; list<int> l;
  
//   int n;
//   while(cin>>n)
//   {
//     st.push(n);

//   }

//   while(!st.empty())
//   {
//     cout<<st.top()<<" ";
//     st.pop();
//   }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   while (n--)
//   {
//     string s;
//     cin >> s;
//     stack<char> st;

//     for (char c : s)
//     {
//       if (c == '0')
//       {
//         (!st.empty() && st.top() == '1') ? st.pop() : st.push('0');
//       }
//       else if (c == '1')
//       {
//         (!st.empty() && st.top() == '0') ? st.pop() : st.push('1');
//       }
//     }

//     cout << (st.empty() ? "YES" : "NO") << endl;
//   }

//   return 0;
// }



