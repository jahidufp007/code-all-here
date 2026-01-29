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
// int main()
// {
//     Node* root=new Node(10);
//     Node* a=new Node(20);
//     Node* b=new Node(30);
//     root->left=a;
//     root->right=b;

  
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
// void preTree(Node* root)
// {
//     if(root ==NULL)
//      return ;

//      cout<<root->val<<" ";
//      preTree(root->left);
//      preTree(root->right);
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

//     preTree(root);

  
//     return 0;
// }



/*in order on Binary_Tree*/
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
// void inTree(Node* root)
// {
//     if(root ==NULL)
//      return ;

//       inTree(root->left);
//      cout<<root->val<<" ";
//      inTree(root->right);
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

//     inTree(root);

  
//     return 0;
// }

/*post order*/
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
// void inTree(Node* root)
// {
//     if(root ==NULL)
//      return ;

//       inTree(root->left);
//           inTree(root->right);
//      cout<<root->val<<" ";
 
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

//     inTree(root);

  
//     return 0;
// }


