/*level order output*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//   public: 
//   int val;
//   Node* left;
//   Node* right;
// Node(int val)
// {
//     this->val=val;
//     this->left=NULL;
//     this->right=NULL;
// }
// };
// void level_order(Node* root)
// {
//  queue<Node *>q;
//  q.push(root);
//  while(!q.empty())
// {
//   Node* f=q.front();
//   q.pop();
//   cout<<f->val<<" ";
//   if(f->left!=NULL)
//   q.push(f->left);
//   if(f->right!=NULL)
//   q.push(f->right);
// }
// }
// int main()
// {
//     Node* root=new Node(10);
//     Node* a=new Node(20);
//     Node* b=new Node(30);
//     Node* c=new Node(40);
//     Node* d=new Node(50);
//     Node* e=new Node(60);
//     root->left=a;
//     root->right=b;
//     a->left=c;
//     b->left=d;
//     b->right=e;

//     level_order(root);

  
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//   public: 
//   int val;
//   Node* left;
//   Node* right;
// Node(int val)
// {
//     this->val=val;
//     this->left=NULL;
//     this->right=NULL;
// }
// };
// Node* input_tree()
// {
//   int val;cin>>val;
//   Node* root;
//   if(val==-1)root=NULL;
//   else root=new Node(val);
//   queue<Node *> q;
//   if(root!=NULL)q.push(root);

//   while(!q.empty())
//   {
//     Node* p=q.front();
//     q.pop();
//     int L,R;cin>>L>>R;
//     Node* myLeft,*myRight;
//     if(L==-1) myLeft=NULL;
//     else myLeft=new Node(L);
//     if(R==-1) myRight=NULL;
//     else myRight=new Node(R);

//    p->left=myLeft;
//    p->right=myRight;


//    if(p->left)
//    q.push(p->left);
//    if(p->right)
//    {
//     q.push(p->right);
//    }

//   }  
//   return root;
// }
// void level_order(Node* root)
// {
//     queue<Node*>q;
//     q.push(root);

//     while(!q.empty())
//     {
//         Node* p=q.front();
//         q.pop();

//         cout<<p->val<<" ";
//         if(p->left)
//         q.push(p->left);
//         if(p->right)
//         q.push(p->right);
//     }
// }
// /*node count*/
// int cnt_node(Node* root)
// {
// if(root==NULL) return 0;
//   int L=cnt_node(root->left);
//   int R=cnt_node(root->right);
//   return 1+L+R;
// }
// int main()
// {

//     Node* root=input_tree();
// //  level_order(root);
// cout<<cnt_node(root); 
//     return 0;
// }
/*count node and get hight*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
  public: 
  int val;
  Node* left;
  Node* right;
Node(int val)
{
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}
};
Node* level_order()
{
    int val;cin>>val;
    queue<Node*>q;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int L,R;cin>>L>>R;
        Node* myLeft,*myRight;
        if(L==-1)myLeft=NULL;
        else myLeft=new Node(L);
        if(R==-1)myRight=NULL;
        else myRight=new Node(R);

        p->left=myLeft;
        p->right=myRight;

        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}
int cnt_leaf_node(Node* root)
{
    if(root==NULL) return 0;

  if(root->left ==NULL && root->right == NULL) return 1;

   int L=
   cnt_leaf_node(root->left);
 int R=
   cnt_leaf_node(root->right);
   cout<<root->val<<" ";
    return L+R;
}
int  tree_height(Node* root)
{
  if(root==NULL) return 0;

  if(root->left==NULL && root->right ==NULL) return 0;
  int L=tree_height(root->left);
  int R=tree_height(root->right);
  return max(L,R)+1;
}
int main()
{
Node* root=level_order();
//    cout<<cnt_leaf_node(root);
   cnt_leaf_node(root);
// cout<<tree_height(root);
    return 0;
}
