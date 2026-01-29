// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n;
//   cin>>n;
//   for(int j=1; j<n; j *=2)
//   {
//     cout<<j<<" ";
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int N=1,X=5;
// if((N*X)%2==1)cout<<"1";
//   cout<<(1*5)/4;
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T;
// cin>>T;
// while(T--)
// {
//   int X,Y;
//   cin>>X>>Y;
//     ((X+1)/2<=Y)? cout<<"yes" : cout<<"NO";
//     cout<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int n;
// cin>>n;
// int arr[n],brr[n];
// for(int x=0; x<n; x++)
// {
//   cin>>arr[x];
// }
// for(int x=0; x<n; x++)
// {
//   cin>>brr[x];
// }
// // vector<int>v(arr,arr+n);
//   vector<int>v1(brr,brr+2);
// for(int j=0; j<2;j++)
// {
//   cout<<v1<<" ";
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int N;
// cin>>N;
// vector<int>v(N);
// for(int j=0; j<N; j++)
// {
//   cin>>v[j];
// }

// reverse(v.begin(),v.end());
// for(int x : v)
// {
//   cout<<x<<" ";
// }
  
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;
//   cin >> N;
//   vector<int> v(N);
//   for (int j = 0; j < N; j++)
//   {
//     cin >> v[j];
//   }
//   for (int i = 0; i < N; i++)
//   {
//     if (v[i] > 0)
//     {
//       replace(v.begin(), v.end(), v[i], 1);
//     }
//     else if (v[i] < 0)
//     {
//       replace(v.begin(), v.end(), v[i], 2);
//     }
//   }

//   for (int x : v)
//   {
//     cout << x << " ";
//   }
//   return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for(int i=0;i<n;i++)
//    {
//         cin >> a[i];
//    }
//    sort(a.begin(),a.end());

//    vector<int> b(a);
//    int mx = 0;
//    for(int i=0;i<b.size();i++)
//    {
//         for(int j=i+1;j<b.size();j++)
//         {
//             mx = max(b[i],b[j]); 
//         }
//    }

//             vector<int> c(mx+1,0);
//    for(int i=0;i<b.size();i++){
//     for(int j=0;j<b.size();j++)
//     {
//         if(b[i]+1==b[j]){
//             if(c[b[i+1]]==0){
//                 c[b[i+1]]++;
//             }
//             else if(c[b[i+1]]==1)
//             {
//                 c[b[i+1]] += 0;
//             }
//         }
//     }
//    }
//     int sum =0;
//     for(int i=0;i<c.size();i++)
//     {

//         sum += c[i];
//     }
//         cout <<sum<<endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (a[j] == a[i] + 1) {
//                 count++;
//                 break;   
//             }
//             if (a[j] > a[i] + 1) {
//                 break;  
//             }
//         }
//     }

//     cout << count << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n;
//   cin>>n;
//   vector<int>v(n);
//   for(int j=0; j<n; j++)
//   {
//     cin>>v[j];
//   }
//   reverse(v.begin(),v.end());
//   for(int x : v)
//   {
//     cout<<x<<" ";
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n,s=0,a=0,m=1,mo=1;cin>>n;
//   int arr[n];
//   for(int j=0; j<n; j++)
//   {
//     //  cout<< j+1<<" number: ";
//      cin>>arr[j];
//   }
 

//   char ch; cin>>ch;
//   for(int i=0; i<n; i++)
//   {
//      s +=arr[i];
//      a -=arr[i];
//      m *=arr[i];
//      mo /=arr[i];
 
//   }

 
//    if(ch=='+')cout<<s; 
//   else if(ch=='-')cout<<a;
//   else if(ch=='*')cout<<m;
//   else if(ch=='/')cout<<mo;
//   else cout<<"Invalid operation";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;
//   cin >> N;
//   int demo = N + 1;
//   long long sum = (long long)N * demo / 2;
//   cout << sum;
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int a,b;
//   char ch;
//   cin>>a>>ch>>b;
//   if(ch=='+')cout<<a+b;
//   else if(ch=='-')cout<<a-b;
//   else if(ch=='*')cout<<a*b;
//   else if(ch=='/')cout<<a/b;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int arr[3], brr[3];
//   for (int j = 0; j < 3; j++)
//   {
//     cin >> arr[j];
//     brr[j] = arr[j];
//   }

//   sort(arr, arr + 3);
//   for (int i = 0; i < 3; i++)
//   {
//     cout << arr[i] << endl;
//   }
//   cout << endl;
//   for (int i = 0; i < 3; i++)
//   {
//     cout << brr[i];
//     if (i < 2)
//       cout << endl;
//   }
//   return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T;
// cin>>T;
// while(T--)
// {
//     float N,X;
//     cin>>N>>X;
//     int sum=N-X;
//     // if(sum%4==0 && sum>0)
//     // {
//     //     cout<<sum/4;
//     // }
//      if(N<=X)
//     {
//         cout<<0;
//     }
//     else 
//     {
//         cout<<ceil((N-X)/4);
//     }
//     cout<<endl;
// }
// return 0;
// }


//  #include <bits/stdc++.h>
//  using namespace std;
 
//  int main()
//  {
 
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int j=0; j<n; j++)
//    {
//     cin>>arr[j];
//    }
// int val;cin>>val;
// int flage=1;
// int l=0,r=n-1;
// while(l<=r)
// {
//     int mid=(l+r)/2;
//     if(arr[mid]==val)
//     {
//       flage=0;break;                  
//     }
//     else if(arr[mid]>val)
//     {
//       r=mid-1;
//     }
//     else 
//     {
//       l=mid+1;
//     }
// }
// (flage==0)?cout<<"YES" : cout<<"NO";

//      return 0;
//  }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int n,q;
// cin>>n;
// vector<int>v(n);
// for(int j=0; j<n; j++)
// {
//     cin>>v[j];
// }
// cin>>q;
// vector<int>v1(q);
// for(int i=0; i<q; i++)
// {
//     cin>>v1[i];
// }
// for(int j=0; j<q; j++)
// {
//     for(int i=0; i<n; i++)
//     {
//          if(v1[j] ==v[i])
//          {
//             cout<<"YES"<<endl;
            
//          }
        
//     }
// }


  
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n; cin>>n;
//   vector<int>v(n);
// for(int j=0; j<n;j++)
// {
//     cin>>v[j];
// }

// for(int j=0; j<n-2; j++)
// {
//    cout<<v[j]<<v[j+1]<<v[j+2]<<" ";
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// bool divide(vector<int>arr)
// {
//   int total_sum=0,size1=arr.size();
//   for(int j=0; j<size1;j++)
//   {
//     total_sum +=arr[j];
//   }

//   int pre=0;
//   for(int j=0; j<size1-1; j++)
//   {
//     pre +=arr[j];
//     int ans=total_sum-pre;
//     if(pre==ans)
//     {
//         return 1;
//     }
//   }
//   return 0;
// }
// int main()
// {

//   int n;cin>>n;
//   vector<int>v(n);
//   for(int j=0; j<n; j++)
//   {
//     cin>>v[j];
//   }
//   cout<<divide(v);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int X;float Y;
// cin>>X>>Y;
// if(X%5==0 && X+0.50 <=Y)
// {
//    cout<<Y-(X+0.50);
// }
// else
// {
//   cout<<Y;
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   // cout<<(float)9/2;
//   cout<<100%200;
//   cin.ignore()
//     return 0;
// }


//12/19/2025 see all coneptual session code and understnding
//&& see some youtube video and codechef problem sobed..
//&& m3 have some question try all question solved..



// #include <bits/stdc++.h>

// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int x,y;string s,ss;
//     cin>>x;cin.ignore();
//     cin>>s>>ss>>y;
//     cout<<x<<endl<<ss<<", "<<s<<endl<<y<<endl;
//     cout<<endl<<x<<","<<s<<","<<ss<<","<<y;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//   public:
//   int a;
//   int b;
//   int c;
//   int d;
//   int e;
// Student(int a,int b,int c,int d,int e)
// {
//     this->a=a;
//     this->b=b;
//     this->c=c;
//     this->d=d;
//     this->e=e;
// }
//     void prf()
//     {

//     }
// };

// int main() {
//   // int n;cin>>n;
//   // while(n--)
//   // {
//   int a,b,c,d,e;
//   cin>>a>>b>>c>>d>>e;
//      Student s1(a,b,c,d,e);
//      int fir1=s1.a+s1.b+s1.c+s1.d+s1.e;
//   // }

  
//     return 0;
// }

// /*this is problem Hacker rank */
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {

// //   int n;
// //   cin>>n;
// //   vector<int>v(n);
// //   for(int j=0;j<n;j++)
// //   {
// //     cin>>v[j];
// //   }
// //   // v.erase(v.begin()+2,v.end()-2);

// //      int filop,lop2;
// //      cin>>filop>>lop2;
// //      vector<int>v2;int sum=0;
// //    for(int j=0; j<filop-1; j++)
// //   {
// //     cout<<v[j]<<" ";
// //     sum++;
// //     // v2[j]=v[j];
// //   }
// //   //
// //    for(int j=lop2; j<n; j++)
// //   {
// //     cout<<v[j]<<" ";sum++;
// //     // v2[j]=v[j];
// //   }
// //   cout<<endl<<sum;
// //   // for(int j=0; j<n; j++)
// //   // {
// //   //   cout<<v2[j]<<" ";
// //   // }

// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {

// //   int n;cin>>n;
// //   // vector<int>v(n);
// //   string v;
// //   for(int j=0; j<n; j++)
// //   {
// //     cin>>v[j];
// //   }
// //   v.erase(v.begin()+1, v.end()-2);int sm=0;
// //   for(int j=0; j<v.size(); j++)
// //   {
// //     // sm +=v[j];
// //     // (v[j]==NULL)?cout<<"0":
// //     cout<<v[j]<<" ";
// //   }
// //   cout<<sm<<endl<<v.size();
// //     return 0;
// // }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int X,Y;cin>>X>>Y;
//   cout<<(X*5000)+(Y*9800);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int N,M;cin>>N>>M;
//     int sum=N-M;
//     (sum<0)?cout<<0 : cout<<sum;
//     cout<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     string s;
 
//      for(int j=0; j<6; j++)
//      {
//       cin>>s[j];
//      }
//      int flage=1;
//      for(int j=0; j<6;j++)
//      {
//       if(s[j]=='W' && s[j+1]=='W' &&s[j+2]=='W')
//       {
//          flage =0;
//       }
//      } 
//     (flage==0)?cout<<"YES": cout<<"NO";
//      cout<<endl;

//   }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int T;
//   cin >> T;
//   while (T--)
//   {
//     int N, X, Y;
//     cin >> N >> X >> Y;
//     int arr[N];
//     for (int j = 0; j < N; j++)
//     {
//       cin >> arr[j];
//     }
//     int min = 0;
//     for (int j = 0; j < N; j++)
//     {
//       ((arr[j] * X) <= Y) ? min += arr[j] *X : min += Y;
//     }
//     cout << min << endl;
//   }
                     /*Time comp*/
//   return 0;




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T;cin>>T;
// while(T--)
// {
//   int H,X,Y;
//   cin>>H>>X>>Y;
//   ((H-Y)%X !=0) ? cout<<(H-Y)/X+2 :  cout<<(H-Y)/X+1;

//  cout<<endl;
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void fun(int* &p)
// {
//    p=NULL;
// }
// int main()
// {

// int x=10;
// int* p=&x;
// fun(p);
// cout<<*p;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {

//     int N;cin>>N;
//     int sum=0,demo=0;;
// while(N>0)
//   {
//           demo=N%10;
//          sum +=demo;
//          N /=10;
//   }
//   cout<<sum;
   
//   }
  
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T;cin>>T;
// while(T--)
// {
//   int n;cin>>n;
//   int sum=0,demo=0, demo2=n%10;
//   while(n>0)
//   {
//     sum=n%10;
//     demo =sum;
//     n /=10;
//   }
 
//   cout<<demo2+sum;
//   cout<<endl;

// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int M,N,A,B;cin>>N>>A>>M>>B;
// int buy=N*A,sale=M*B;
// cout<<buy;
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here

// int T;cin>>T;
// while(T--)
// {
//     int X,Y,Z;
//     cin>>X>>Y>>Z;
//     ((Z*24)*60>=(X*Y))? cout<<"YES" : cout<<"NO";
//     cout<<endl;
    
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int cot=0;
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
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
// Node* newnode=new Node(val);
// Node* temp=tail;
// if(head==NULL)
// { cot++;
//     head=newnode;
//     tail=newnode;
//    return ;
// }

// temp->next=newnode;
// tail=newnode;cot++;

// }
// void print_node(Node* &head)
// {
//     Node* temp=head;
//     while(temp != NULL)
//     {
//         cout<<temp->val<<endl;
//         temp=temp->next;
//     }
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
// while(true)
// {
//     int val; cin>>val;
//     if(val == -1) break;
//     insert_at_tail(head,tail,val);
// }
// // print_node(head);
//   cout<<cot;
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
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//     Node* newnode=  new Node(val);
//     Node* temp=head;
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     tail=newnode;
// }
// void print_reverse(Node* &head)
// {
//    if(head==NULL) return ;


 
//     print_reverse(head->next);
//    cout<<head->val<<endl;
// }
// int main()
// {

//     Node* head=NULL;
//     Node* tail=NULL;
//     while(true)
//     {
//         int val; cin>>val;
//         if(val==-1) break;
//         insert_at_tail(head,tail,val);

//     }
//   print_reverse(head);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;         //w->qty ini, x->max cap., y-> rate l/h, 
// 	                //z-> tap open time
// 	while(t--)      
// 	{
// 	    int w,x,y,z;
// 	    cin>>w>>x>>y>>z;
// 	    if((x-w)==(y*z))
// 	        cout<<"filled"<<endl;
// 	    else if((x-w)>(y*z))
// 	        cout<<"Unfilled"<<endl;
// 	    else if(w>x)
// 	        cout<<"overflow"<<endl;
// 	    else
// 	        cout<<"overflow"<<endl;
	        
	    
// 	}
// 	return 0;
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

// void insert_at_tail(Node* &head, Node* &tail,int val)
// {
//   Node* newnode=new Node(val);
//   Node* temp=tail;
//   if(head==NULL)
//   {
//       head= newnode;
//       tail=newnode;
//     return;
//   }
//   temp->next=newnode;
//   tail=newnode;
// }

// void print_linked_list(Node* &head)
// {
//     int min1=INT_MAX,max1=INT_MIN;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         // cout<<temp->val<<endl;
   
//         if(temp->val < min1)
//         {
//            min1=temp->val;
//         }
//         if(temp->val>max1)
//         {
//             max1=temp->val;
//         }
//             temp=temp->next;
//     }
//   cout<<max1-min1;
// }
// int main()
// {
// Node* head =NULL;
// Node* tail=NULL;

// while(true)
// {
//     int val; cin>>val;
//     if(val==-1) break;

// insert_at_tail(head,tail,val);
// }
//   print_linked_list(head);

//     return 0;
// }

// /*Quries*/
// #include <bits/stdc++.h>
// using namespace std;

// int min1=0;
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
// void insert_at_head(Node* &head,Node* &tail,int val)
// {
//     Node* newnode=new Node(val);
//     // Node* temp=head;
//     if(head==NULL)
//     {
//         min1++;
//         head=newnode;
//         tail=newnode;
//         return ;
//     }
//   newnode->next=head;
//   head=newnode;
//   min1++;
// }
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//    Node* newnode=new Node(val);
//    Node* temp=tail;
//    if(head==NULL)
//    {
//     min1++;
//     head=newnode;
//     tail=newnode;
//     return ;
//    }
//    temp->next=newnode;
//    tail=newnode;
//    min1++;
// }
// void print_linked(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }

// void delete_at_tail(Node* &head,Node* &tail, int val)
// {
//     Node* temp=head;
//     if(head==NULL) return;
//     for(int j=0; j<val-1; j++)
//     {
//         temp=temp->next;
//     }
//     Node* deleteany=temp->next;
//     temp->next=temp->next->next;
//     delete deleteany;
//     // tail=temp;
//     min1--;
//     //check user input loop idx have any problem?
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;

//       int N; cin>>N;
//     while(N--)
//     {
//         int X,V; cin>>X>>V;
//         if(X==0)
//         {
//         insert_at_head(head,tail,V);
//           print_linked(head);
//         }
//       if(X==1) 
//       {
//       insert_at_tail(head,tail,V);
//         print_linked(head);
//       }
//       else if(X)
//     {
//       if(V<=min1)
//       {
//       delete_at_tail(head,tail,V); 
//       print_linked(head);
//       }
//       else {
        
//         print_linked(head);
//       }
//     }
//       // if(X==2)
//       // {
//       //   if(V<=min1)
//       //   {
//       //   delete_at_tail(head,tail,V);
//       //   print_linked(head);
//       //   }
//       //   else 
//       //   {
//       //       // continue;
//       //       print_linked(head);
//       //   }
//       // }
//      cout<<endl;
//     }

// cout<<" "<<min1;
//     return 0;
// }


/*Remove Duplicate*/
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
// void insert_at_tail(Node* &head,Node* &tail, int val)
// {
//     Node* newnode=new Node(val);
//     Node* temp=tail;
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return ;
//     }
//     temp->next=newnode;
//     tail =newnode;
// }
// void print_linked_list(Node* &head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<endl;
//         temp=temp->next;
//     }
// }
// int main()
// {
// Node* head=NULL;
// Node* tail=NULL;
// while(true)
// {
//     int val; cin>>val;
//     if(val==-1) break;
//     insert_at_tail(head,tail,val);
// }
 
// print_linked_list(head);
//     return 0;
// }




/*Quries*/ /*soved done here only previous code not solved*/
// #include <bits/stdc++.h>
// using namespace std;

// int min1=0;
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
// void insert_at_head(Node* &head,Node* &tail,int val)
// {
//     Node* newnode=new Node(val);
//     if(head==NULL)
//     {
//         min1++;
//         head=newnode;
//         tail=newnode;
//         return ;
//     }
//   newnode->next=head;
//   head=newnode;
//   min1++;
// }
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//    Node* newnode=new Node(val);
//    Node* temp=tail;
//    if(head==NULL)
//    {
//     min1++;
//     head=newnode;
//     tail=newnode;
//     return ;
//    }
//    temp->next=newnode;
//    tail=newnode;
//    min1++;
// }
// void print_linked(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }

// void delete_at_tail(Node* &head,Node* &tail, int val)
// {
//     Node* temp=head;
//     if(head==NULL) return;
//     /*delete head*/
//     if(val==0)
//     {
//       Node* temp=head;
//       head=head->next;
//       if(head==NULL) tail=NULL;
//       delete temp;
//       return ;
//     }
//     for(int j=0; j<val-1 && temp->next!=NULL; j++)
//     {
//         temp=temp->next;
//     }
//     if(temp->next==NULL) return ;
//     Node* deleteany=temp->next;
//     temp->next=deleteany->next;
//     if(deleteany == tail)
//     {
//       tail=temp;
//     }
//     delete deleteany;
//     min1--;
  
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;

//       int N; cin>>N;
//     while(N--)
//     {
//         int X,V; cin>>X>>V;
//         if(X==0)
//         {
//         insert_at_head(head,tail,V);
//           print_linked(head);
//         }
//       if(X==1) 
//       {
//       insert_at_tail(head,tail,V);
//         print_linked(head);
//       }
//       if(X==2)
//       {
//         if(V<=min1)
//         {
//         delete_at_tail(head,tail,V);
//         print_linked(head);
//         }
//         else 
//             print_linked(head);
//       }
//      cout<<endl;
//     }

//     return 0;
// }

/*Duplicate*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int A;
//   cin >> A;
//   vector<int> v(A);
//   for (int j = 0; j < A; j++)
//   {
//     cin >> v[j];
//   }

//   int flage = 1;
//   for (int j = 0; j < A - 1; j++)
//   {
//     for (int i = j + 1; i < A; i++)
//     {
//       if (v[j] == v[i])
//         flage = 0;
//     }
//   }
//   (flage == 0) ? cout << "YES" : cout << "NO";
//   return 0;
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
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//   Node* newnode=new Node(val);
//   Node* temp=tail;
//   if(head==NULL)
//   {
//     head=newnode;
//     tail=newnode;
//     return ;
//   }
//   temp->next=newnode;
//   tail=newnode;

// }
// void print_linked_list(Node* head)
// {
//   Node* temp=head;
//   while(temp!=NULL)
//   {
//     cout<<temp->val<<" ";
//     temp=temp->next;
    
//   }
  
// }

// int main()
// {

//   Node* head=NULL;
//   Node* tail=NULL;
//   while(true)
//   {
//     int val;cin>>val;
//     if(val==-1) break;
//     insert_at_tail(head,tail,val);
//   }
//   print_linked_list(head);
  
//     return 0;
// }

/*Get prefix sum*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;
//   cin >> N;
//   vector<int> v(N + 1);
//   for (int j = 0; j < N; j++)
//   {
//     cin >> v[j];
//   }
//   vector<long long int> pre(N + 1);
//   pre[0] = v[0];
//   for (int j = 1; j < N; j++)
//   {
//     pre[j] = pre[j - 1] + v[j];
//   }

//   for (int j = N - 1; j >= 0; j--)
//   {
//     cout <<pre[j] << " ";
//   }
//   return 0;
// }


/*last problem*/
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

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//   Node *newnode = new Node(val);
//   Node *temp = tail;
//   if (head == NULL)
//   {
//     head = newnode;
//     tail = newnode;
//     return;
//   }
//   temp->next = newnode;
//   tail = newnode;
// }

// void print_linked_list(Node *head)
// {
//   Node *temp = head;
//   while (head != NULL)
//   {
//     cout << temp->val;
//     cout << " ";
//     temp = temp->next;
//   }
// }
// void deleteany(Node *&head, int val)
// {

//   if (head == NULL)
//   {
//     return;
//   }
//   /*delet head*/
//   if (val == 1)
//   {
//     Node *temp = head;
//     head = head->next;
//     delete temp;
//     return;
//   }
//   Node *curr = head;
//   for (int j = 1; j < val - 1 && curr->next != NULL; j++)
//   {
//     curr = curr->next;
//   }
//   if (curr->next == NULL)
//   {
//     return;
//   }
//   Node *temp = curr->next;
//   curr->next = temp->next;
//   delete temp;
// }
// int main()
// {
//   Node *head = NULL;
//   Node *tail = NULL;
//   while (true)
//   {
//     int val;
//     cin >> val;
//     if (val == -1)
//       break;
//     insert_at_tail(head, tail, val);
//   }
//   /*1*/
// // Node* tem=head;
// // int min1=0;
// //       for(Node* j=tem;j->next!=NULL  ;j=j->next)
// //       {
          
// //         for(Node* i=tem->next; i!=NULL; i=i->next)
// //         { 
// //          min1++;
// //           if(j->val==i->val)
// //           {
// //             deleteany(head,min1);
// //           }
// //         }
// //       }
//     // deleteany(head,2);

//     /*2*/
//   Node *curr = head;

//   while (curr)
//   {
//     Node *prev = curr;
//     Node *temp = curr->next;

//     while (temp)
//     {
//       if (temp->val == curr->val)
//       {
//         prev->next = temp->next;
//         delete temp;
//         temp = prev->next;
//       }
//       else
//       {
//         prev = temp;
//         temp = temp->next;
//       }
//     }
//     curr = curr->next;
//   }

//   print_linked_list(head);
//   // cout<<endl<<min1;

//   return 0;
//   //     unordered_set<int> seen;
//   // Node* curr = head;
//   // Node* prev = NULL;

//   // while (curr) {
//   //     if (seen.count(curr->data)) {
//   //         prev->next = curr->next;
//   //         delete curr;
//   //         curr = prev->next;
//   //     } else {
//   //         seen.insert(curr->data);
//   //         prev = curr;
//   //         curr = curr->next;
//   //     }
//   // }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N,X;
//     cin>>N>>X;
//     cout<<N/(X*3)<<endl;
    
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N,K;cin>>N>>K;
//     vector<int>v(N);
//     for(int j=0; j<N; j++)
//     {
//         cin>>v[j];
//     }
 
//   int demo=K;
//     for(int j=0; j<N; j++)
//     {
//     if(v[j]<=demo)
//     {
//         cout<<1;
//         demo -=v[j];
//     }
//     else 
//         cout<<0;
//     }
   
    
//    cout<<endl;
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;cin>>N;
//     int demo=0;
//     if(N%2==0) 
//     {cout<<N/2;}
//     else 
//     {
//         int sum=N/2;
//         for(int j=0; j<sum;j++)
//         {
//             if(N%j==0)
//             {
//              cout<<j<<" ";   
//             }
//         }
//         // cout<<demo;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// cout<<14362%10+14362*10;
// cout<<endl<<14362/10;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T; 
// while(T--)
// {
//     int A,B,C;
//     cin>>A>>B>>C;
//     if(A>B && A>C) cout<<A;
//     else if(B>A && B>C) cout<<B;
//     else cout<<C;
//     cout<<endl;
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N,X;
//     cin>>N>>X;
//     if(N==X) cout<<0;
//       else if(N-X==1 || N-X==2)cout<<N-X;
//     else if(N!=X)(N<X)? cout<<N : cout<<X;
  
//     cout<<endl;
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int t; cin>>t;
// while(t--)
// {
//     int N; cin>>N;
//     long long int sum=1;
//     for(int j=1; j<=N; j++)
//     {
//         sum *=(long long)j;
//     }
//     cout<<(long long)sum<<endl;
// }
// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// long long int  rec(int N)
// {
// if(N<=1) return 1 ;
// return (long long)N* rec(N-1);
// }
// int main()
// {
// int t; cin>>t;
// while(t--)
// {
//     int N; cin>>N; 
//    cout<<(long long)rec(N);
// }
  
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T; 
// while(T--)
// {
//     int N;cin>>N;
//     string s;
//     for(int j=0; j<N; j++)
//     {
//         cin>>s[j];
//     }
    
//     for(int j=0; j<N; j++)
//     {
//         if(s[j]=='A')cout<<"T";
//         else if(s[j]=='T')cout<<"A";
//         else if(s[j]=='C')cout<<"G";
//         else if(s[j]=='G')cout<<"C";
//     }
//     cout<<endl;
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;cin>>N;
//   int ans=0;
//   for(int j=1; j*j<=N;j++)
//   {
//     ans=j;
//   }
//   cout<<ans;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T; cin>>T;
//   while(T--)
//   {
//     int X,Y,Z;
//     cin>>X>>Y>>Z;
//      if((X*Y)%2==1) 
//      {
//      if(((X*Y)/2)+1>=Z)
//      cout<<"YES";
//      }
//     else 
//         ((X*Y)/2<Z)? cout<<"YES" : cout<<"NO";
//     cout<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T; cin>>T;
// while(T--)
// {
//     int X,N;cin>>X>>N;
//     int demo=N-X*100;
//     if(N>(X*100) && demo%100 !=0)
//     {
//         cout<<demo/100+1;
//     }
//     else if(N<(X*100)) cout<<0;
//     else cout<<demo/100;
//     cout<<endl;
// }
  
//     return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T; cin>>T;
//   while(T--)
//   {
//     int a,b,c,x,y,z;
//     cin>>a>>b>>c>>x>>y>>z;
//     // ((a+b+c)==(x+y+z))? cout<<"Tie" : ((a+b+c)>(x+y+z))? cout<<"Alice" : cout<<"Bob";
//     int b=max({x,y,z}), bmin=min({x,y,z}),a=max({a,b,c}),amin=min({a,b,c});
//     (b==a)

//     cout<<endl;
//   }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// void test()
// {
//     int N,A,B;
//     cin>>N>>A>>B;
//     int even=0,odd=0;
//     for(int j=1; j<=N; j++)
//     {
//         if(j%2==0)
//         even++;
//         else 
//         odd++;
//     }
//     cout<<(even*A)+(odd*B)<<endl;
// }
// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--) test();
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//  int T; cin>>T;
//  while(T--)
//  {
//     int N;cin>>N;int cnt=0,arr[N];
//     for(int j=0; j<N; j++)
//     {
//         cin>>arr[j];
//     }

//     for(int j=0; j<N;j++)
//     {
//         if(arr[j]==5) cnt++;
//     }
//     cout<<cnt<<endl;
//  }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void test()
// {
//     int X,Y;
//     cin>>X>>Y;
//     int sum=ceil((float)X/10);
//     int sum2=ceil((float)Y/10);
//     cout<<max(sum,sum2)-min(sum,sum2)<<endl;
// }
// int main() {
// 	// your code goes here
// int T; cin>>T; 
// while(T--) test();
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int a, b, c, a1, b1, c1;
//         cin >> a >> b >> c >> a1 >> b1 >> c1;

//         if (a == a1 && b == b1 && c == c1)
//         {
//             cout << "TIE";
//         }
//         else if (a >= a1 && (a + b + c) == (a1 + b1 + c1))
//         {
//             if (a > a1)
//             {
//                 cout << "DRAGON1";
//             }
//             else
//             {
//                 if (b >= b1)
//                 {
//                     if (b > b1)
//                     {
//                         cout << "DRAGON";
//                     }
//                     else
//                     {
//                         if (c >= c1)
//                         {
//                             (c > c1) ? cout << "DRAGON3" : cout << "SLOlTH";
//                         }
//                     }
//                 }
//             }
//         }
//         else if (a <= a1 && (a + b + c) == (a1 + b1 + c1))
//         {
//             if (a < a1)
//             {
//                 cout << "SLOTH";
//             }
//             else
//             {
//                 if (b <= b1)
//                 {
//                     if (b < b1)
//                     {
//                         cout << "SLOTH";
//                     }
//                     else
//                     {
//                         if (c <= c1)
//                         {
//                             (c < c1) ? cout << "SLOTH" : cout << "DRAGON";
//                         }
//                     }
//                 }
//             }
//         }
//         else if ((a + b + c) != (a1 + b1 + c1))
//         {
//             if ((a + b + c) > (a1 + b1 + c1))
//                 cout << "DRAGON";
//             else
//                 cout << "SLOTH";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T; cin>>T; 
//   while(T--)
//   {
//     vector<int>v;
//     for(int j=0;j<9; j++)
//     {
//         cin>>v[j];
//     }
//    int flage=1;
//     for(int j=0; j<9-1; j++)
//     {
//         if(v[j]<v[j+1])
//         flage=0;
//     }
//     if(flage==0)cout<<"Impossible";
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int A,B,X,Y;
//     cin>>A>>B>>X>>Y;
//    double chef=double(A/X), chefina=double(B/Y);
//  (chef==chefina)? cout<<"Both" : (chef<chefina)? cout<<"Chef" : cout<<"Chefina";

//     cout<<endl;
// }

// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N; cin>>N;
//     vector<int>v(N);
//     for(int j=0; j<N; j++)
//     {
//         cin>>v[j];
//     }
//     int sum=0;
    
//     // for(int j=0; j<N;j++)
//     // {
//     //    cout<<(v[j]+v[j+1])%2<<" ";
//     // }
   
//     cout<<endl;
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N;cin>>N;
//   cout<<((N/5)*4)+(N%5);
//     cout<<endl;
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N; cin>>N;
//    long long fac=1;
//    for(int j=1;j<=N; j++)
// {
//     fac *=j;
// }   
// cout<<fac<<endl;
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// int T; cin>>T;
// while(T--)
// {
//     int N; cin>>N;
//     if(N==1)cout<<0;
//     else if(N%8==0)cout<<N/7+1;
//     else cout<<N/8+1;
//     cout<<endl;
// }
// return 0;
// }




/*01/02/2026*/
/*Basic Problem Solving Contest Phitron mentorship*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int  a,b;cin>>a>>b;
//   double demo=(a*1.0)/b;
//   cout<<a/b<<" "<<a%b<<" "<<fixed<<setprecision(5)<<demo;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int X,Y;cin>>X>>Y;
// cout<<(X*6)+Y;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int X; cin>>X;
//   (X<100)?cout<<"YES" : cout<<"NO";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int X,Y;cin>>X>>Y;
//   (X==Y)?cout<<"Same" : (X<Y)?cout<<"Old" : cout<<"New";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int X,Y,K; cin>>X>>Y>>K;
//   (abs(X-Y)<=K)?cout<<"Yes": cout<<"No";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int X;cin>>X;
//     cout<<X-10<<endl;
//   }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int a,b,c,a1,b1,c1;
//     cin>>a>>b>>c>>a1>>b1>>c1;
//     if(a==a1 && b==b1 && c==c1)cout<<"Bob";
//     else if(a==a1)
//     {
//           if(b==b1)
//           {
//                 if(c>c1)cout<<"Alice";
//                 else cout<<"Bob";
//           }
//           else 
//           {
//             if(b>b1) cout<<"Alice";
//             else cout<<"Bob";
//           }
//     }
//     else 
//     {
        
//     }
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T; cin>>T;
//   while(T--)
//   {
//     int N,K;cin>>N>>K;
//     int demo=N/(K+1);
//     cout<<N-(demo*K)<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int a, b, c, a1, b1, c1;
//         cin >> a >> b >> c >> a1 >> b1 >> c1;
//         int demo2=(a+b+c) -((max({a,b,c})) +(min({a,b,c}))),demo3=(a1+b1+c1)-((max(a1,b1,c1))+(min({a1,b1,c1})));
//         if ((max({a,b,c}))== (max({a1,b1,c1})) && (min({a,b,c})) == (min(a1,b1,c1)) && demo2 == demo3 )
//             cout << "Tie";
//         else
//         {
//             int aa = max({a, b, c}), bb = min({a, b, c}), mid = (a + b + c) - (aa + bb);
//             int aa1 = max({a1, b1, c1}), bb1=min({a1,b1,c1}),  mid1 = (a1 + b1 + c1) - (aa1 + bb1);
//             if(aa > aa1 && bb >>bb1 && mid>mid1)cout<<"Alice";
//             else cout<<"Bob";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//  int T; cin>>T;
//  while(T--)
//  {
//      int a,b,c,a1,b1,c1;
//      cin>>a>>b>>c>>a1>>b1>>c1;
//      int total1=a+b+c, total2=a1+b1+c1;
//      if(total1==total2 && a==a1 && b==b1 && c==c1) cout<<"TIE";
     
     
//      if(total1>total2)cout<<"Alice";
//      else if(total2>total1)cout<<"Bob";
//      else if(a>a1)cout<<"Alice";
//      else if(a1>a)cout<<"Bob";
//      else if(b>b1)cout<<"Alice";
//      else if(b1>b)cout<<"Bob";
//      else if(c>c1)cout<<"Alice";
//      else if(c1>c)cout<<"Bob";
//      cout<<endl;
//  }
//  return 0;   
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while(T--) {
//         int a1, a2, a3, b1, b2, b3;
//         cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

//         int aliceMax = max({a1, a2, a3}), aliceMin = min({a1, a2, a3}), aliceMid = a1 + a2 + a3 - aliceMax - aliceMin;

//         int bobMax = max({b1, b2, b3}), bobMin = min({b1, b2, b3}), bobMid = b1 + b2 + b3 - bobMax - bobMin;

//         int aliceNum = aliceMax*100 + aliceMid*10 + aliceMin, bobNum   = bobMax*100 + bobMid*10 + bobMin;

//         if(aliceNum > bobNum) cout << "Alice\n";
//         else if(bobNum > aliceNum) cout << "Bob\n";
//         else cout << "Tie\n";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int a1, a2, a3, b1, b2, b3;
//         cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

//         // Find max for Alice
//         int aliceMax = a1;
//         if (a2 > aliceMax) aliceMax = a2;
//         if (a3 > aliceMax) aliceMax = a3;

//         // Find max for Bob
//         int bobMax = b1;
//         if (b2 > bobMax) bobMax = b2;
//         if (b3 > bobMax) bobMax = b3;

//         // Compare max numbers
//         if (aliceMax > bobMax) cout << "Alice\n";
//         else if (bobMax > aliceMax) cout << "Bob\n";
//         else cout << "Tie\n";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int N,X;cin>>N>>X;
//     int demo=X-((2*N)-X);
//    cout<<max(0,demo)<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T; cin>>T;
// while(T--)
// {
//     int a,b,c,a1,b1,c1;
//     cin>>a>>b>>c>>a1>>b1>>c1;
//     if((a+b+c)==(a1+b1+c1))cout<<"Tie";
//     else if()
//     else cout<<"Bob";

//     cout<<endl;
// }
  
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t ;
// 	cin >> t ;
// 	while (t--){
// 	    int dsa1, toc1 , dm1 ,dsa2, toc2 , dm2;
// 	    cin >>  dsa1 >>toc1 >> dm1;
// 	    cin >>  dsa2>> toc2 >> dm2;
// 	    int total1 =dsa1+ toc1 + dm1;
// 	    int total2=dsa2+toc2 + dm2;
	    
// 	    if (total1==total2 && dsa1 ==dsa2 && toc1 ==toc2 &&dm1==dm2)cout << "Tie"<< endl ;
// 	    if (total1>total2)cout << "Alice"<< endl;
// 	    else if (total2>total1)cout << "Bob"<< endl;
// 	    else if (dsa1>dsa2)cout << "Alice"<< endl;
// 	    else if (dsa2>dsa1)cout << "Bob"<< endl;
// 	    else if (toc1>toc2)cout << "Alice"<< endl;
// 	   else if (toc2>toc1)cout << "Bob"<< endl;
// 	   else if (dm1>dm2)cout << "Alice"<< endl;
// 	   else if (dm2>dm1)cout << "Bob"<< endl;
	   
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// //   if(5 && 6 && 9 > 8 && 7 && 5)cout<<"Yes";
// //   else cout<<"NO";

// int T; cin>>T;
// while(T--)
// {
// 	int a,b,c,a1,b1,c1;
// 	cin>>a>>b>>c>>a1>>b1>>c1;
// 	int mid=(a+b+c)-(max({a,b,c})+min({a,b,c}));
// 		int mid2=(a1+b1+c1)-(max({a1,b1,c1})+min({a1,b1,c1}));
// 	if((max({a,b,c})) >= (max({a1,b1,c1}))){
		
//        if(mid==mid2)
// 	   {
//             //  (min({a,b,c})> min({a1,b1,c1}))? cout<<"Alice" : cout<<"Bob1";
// 			 (min({a,b,c})> min({a1,b1,c1}))? cout<<"Alice" : (min({a,b,c})< min({a1,b1,c1}))? cout<<"Bob" : cout<<"Tie";
// 	   }
// 	   else 
// 	   {
// 		cout<<"Alice";
// 	   }
// 	} 
// 	else if((max({a,b,c})) < (max({a1,b1,c1})))cout<<"Bob";
// 	else cout<<"Tie";
// 	cout<<endl;
// }
// 	return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   for(int j=1; j<=10-4; ++j)
//   cout<<j<<" ";
// 	return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   string s;
//   cin>>s;
// int len=s.size();
// char ch;
// for(int j=0; j<len-1;j++)
// {
//   for(int i=j+1; i<len; i++)
//   {
//     if(s[j] ==s[i])
//     {

//     }
//     else ch=s[j];
//   }
// }
// cout<<ch;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   long long int  X;cin>>X;
//   if(X<5)cout<<0; return 0;
//   long long int profit=float(X/5);
// long long int fee=(100+profit-1)/profit;
//   cout<<fee;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   long long int X;cin>>X;
// cout<<(long long)(100/(0.2*X));

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   string  S;
//     cin>>S;
//   int M; cin>>M;
  
//      int len=S.size();
//      sort(S.begin(),S.end());
//      int flage=1; char ch;
// for(int j=0; j<len;j++)
// {
//   if(S[j]==S[j+1])
//   flage=0;
//   else ch=S[j];
// }
// if(flage==0)cout<<-1;
// else cout<<ch;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   string s;
//   int M, sum = 0;
//   cin >> s >> M;

//   for (int j = 0; j < s.size(); j++)
//   {

//     char c = s[j];
//     int how_many = 1;
//     if (c >= 'a' && c <= 'z')
//     {
//       if (j + 1 < s.size() && s[j + 1] >= '2' && s[j + 1] <= '9')
//       {
//         how_many = s[j + 1] - '0';
//         j++;
//       }
//       for (int i = 0; i < how_many; i++)
//       {
//         sum++;
//         if (sum == M)
//         {
//           cout << s[j - (how_many > 1)];
//           return 0;
//         }
//       }
//     }
//   }
//   return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<long long> Sum(N, 0);
//     vector<int> zero(N, 0);

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             long long x;
//             cin >> x;
//             (x==0)? zero[i]++ : Sum[i] +=x;
          
//         }
//     }

//     long long target = LLONG_MIN;

//     for (int i = 0; i < N; i++) {
//         if (zero[i] == 0) {
//             if (target == LLONG_MIN)
//                 target = Sum[i];
//             else if (Sum[i] != target) {
//                 cout << "NO";
//                 return 0;
//             }
//         }
//     }

//     cout << "YES";
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string S;
//     cin >> S;

//     int freq[26] = {0}; 

 
//     for (char x : S) {
//         freq[x - 'a']++;
//     }

   
//     for (char c : S) {
//         if (freq[c - 'a'] == 1) {
//             cout << c << endl;
//             return 0;
//         }
//     }

   
//     cout << -1 << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     newnode->prev=tail;
//     tail = newnode;
// }
// void print_linked_list(Node* tail)
// {
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->prev;
//     }
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     while (true)
//     {
//         int val;
//         cin >> val;
//         if (val == -1)
//             break;
//         insert_at_tail(head, tail, val);
//     }
  
//     print_linked_list(tail);
  
//     return 0;
// }


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
//     Node* newnode= new Node(val);
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
// void linked_list_forward_print(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }
// void sort_linked_list(Node* head)
// {
//   for(Node*  j=head; j->next !=NULL; j=j->next)
//     {
//         for(Node* i=j->next; i!=NULL; i=i->next)
//         {
//             if(j->val>i->val)

//             swap(j->val,i->val);
//         }
//     }
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
//     while(true)
//     {
//         int val; cin>>val;
//         if(val==-1) break;
//         insert_at_tail(head,tail,val);
       
//     }

//   sort_linked_list(head);
//     linked_list_forward_print(head);

  
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T;cin>>T;
// while(T--)
// {
//     int N;cin>>N;
//     string s;cin>>s;
//     for(int j=0; j<N-1; j +=2)
//     {
//        swap(s[j],s[j+1]);
   
//     }
//     for(int j=0; j<N; j++)
//     {
//        s[j]='a'+'z'-s[j];
//     }
  
//      cout<<s<<endl;
// }
  
//     return 0;
// }


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
// void insert_at_head(Node *&head, Node *&tail, int val)
// {
//    Node *newnode = new Node(val);
//    if (head == NULL)
//    {
//       head = newnode;
//       tail = newnode;
//       return;
//    }
//    tail->next = newnode;
//    newnode->prev = tail;
//    tail = newnode;
// }
// void check_linked_list(Node *head, Node *tail)
// {
//    Node *r = head;
//    Node *l = tail;
//    int flage = 1;
//    while (l != r && l->prev != r)
//    {
//       if (r->val != l->val)
//        {
//          cout<<"NO";
//          return ;
//        }
//       r = r->prev;
//       l = l->next;
//    }
//   cout<<"YES";
// }
// int main()
// {
//    Node *head = NULL;
//    Node *tail = NULL;
//    while (true)
//    {
//       int val;
//       cin >> val;
//       if (val == -1)
//          break;
//       insert_at_head(head, tail, val);
//    }
//    check_linked_list(head, tail);

//    return 0;
// }


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
// void insert_at_head(Node* &head,Node* &tail,int val)
// {
//    Node* newnode=new Node(val);
//    if(head==NULL)
//    {
//       head=newnode;
//       tail=newnode;
//       return ;
//    }
//    newnode->next=head;
//    head->prev=newnode;
//    head=newnode;

// }
// void insert_at_any_pos(Node* &head,Node* tail,int idx,int val)
// {
//    Node* newnode=new Node(val);
//    Node* temp=head;
//   for(int j=0; j<idx;j++)
//   {
//    temp=temp->next;
//   }
//   newnode->next=temp->next;
//   temp->next->prev=newnode;
//   temp->next=newnode;
//   newnode->prev=temp;
// }
// void insert_at_tail(Node* head,Node* tail,int val)
// {
//    Node* newnode=head;
//    if(head==NULL)
//    {
//       head=newnode;
//       tail=newnode;
//       return ;
//    }
//    tail->next=newnode;
//    newnode->prev=tail;
//    tail=newnode;
// }
// void print_linked_list_forward(Node* head)
// {
//    Node* temp=head;
//    while(temp!=NULL)
//    {
//       cout<<temp->val<<" ";
//       temp=temp->next;
//    }
// }
// void print_linked_list_backword(Node* tail)
// {
//    Node* temp=tail;
//    while(temp!=NULL)
//    {
//       cout<<temp->next<<" ";
//       temp=temp->prev;
//    }
// }
// int main()
// {
//    Node* head=NULL;
//    Node* tail=NULL;

//   int T;cin>>T;
//   while(T--)
//   {
   
//       int idx,val;cin>>idx>>val;
//       if(idx==0)insert_at_head(head,tail,val);
//     if(idx !=0) insert_at_tail(head,tail,val);

//   }
//   print_linked_list_forward(head);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int> l;
//   list<int>l2;
// while(true)
// {
//    int val; cin>>val;
//    if(val==-1) break;
//    l.push_back(val);

// }
// while(true)
// {
//    int val; cin>>val;
//    if(val==-1) break;
//    l2.push_back(val);
// }
// if(l==l2) cout<<"Yes";
// else cout<<"No";

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l;
//   while(true)
//   {
//    int val; cin>>val;
//    if(val==-1) break;
//    l.push_back(val);
//   }
//   l.reverse();
//   for(auto it1 : l)
//   {
//    cout<<it1<<" ";
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int> l;
//   while(true)
//   {
//    int val; cin>>val;
//    if(val==-1) break;
//    l.push_back(val);

//   }
//   l.sort(greater<int>());
//   l.reverse();
//   for(auto it1 : l)
//   {
//    cout<<it1<<" ";
//   }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   list<int>l;
//   int T;cin>>T;
//   while(T--)
//   {
//      int x,v;cin>>x>>v;
//      if(x==0) l.push_front(v);
//      else l.insert(l.begin() + (x-1),v);
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   cout<< double(536844%2);
//     return 0;
// }

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
// void insert_at_head(Node* &head,Node* &tail,int val)
// {
//   Node* newnode=new Node(val);
//   if(head==NULL)
//   {
//     head=newnode;
//     tail=newnode;
//     return ;
//   }
//   newnode->next=head;
//   head->prev=newnode;
//   head=newnode;
// }
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//   Node* newnode=new Node(val);
//   if(head==NULL)
//   {
//     head=newnode;
//     tail=newnode;
//     return ;
//   }
//   tail->next=newnode;
//   newnode->prev=tail;
//   tail=newnode;
// }
// void insert_any_pos(Node* &head,Node* &tail,int idx,int val)
// {
//   Node *tmp = head;
//   if(idx==0)
//   {
//     insert_at_head(head,tail,val);
//     return ;
//   }
//   for (int j = 1; j < idx; j++)
//   {
//     if(tmp==NULL)break;
//     tmp = tmp->next;
//   }
//   if(tmp==NULL)
//   {
//     cout<<"Invalid";
//     return ;
//   }
//   if(tmp->next==NULL)
//   {
//     insert_at_tail(head, tail,val);
//     return ;
//   }
//   Node *newnode = new Node(val);
//   Node *lastnode = tmp->next;

//   newnode->next = lastnode;
//   lastnode->prev = newnode;

//   tmp->next = newnode;
//   newnode->prev = tmp;
// }
// void delete_at_head(Node* head,Node* tail,int idx)
// {
//   Node* deletetmp=head;

// }
// void print_linked_list(Node* head)
// {
//   Node* tmp=head;
//   while(tmp!=NULL)
//   {
//     cout<<tmp->val<<" ";
//     tmp=tmp->next;
//   }
// }
// int main()
// {
// Node* head=NULL;
// Node* tail=NULL;
// int T;cin>>T;
// while(T--)
// {
//   int idx,val;
//    cin>>idx>>val;
//   // if(val==-1 && idx==-1) break;
//   // insert_at_tail(head,tail,val);
// insert_any_pos(head,tail,idx,val);
// }
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
//   Node* prev;
// Node(int val)
// {
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
// }
// };
// int siz1=0;
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//   Node* newnode=new Node(val);
//   if(head==NULL)
//   {
//     siz1++;
//     head=newnode;
//     tail=newnode;
//     return ;
//   }
//   siz1++;
//   tail->next=newnode;
//   newnode->prev=tail;
//   tail=newnode;
// }


// void print_linked_list(Node* head)
// {
//   Node* tmp0=head;
//   for(int j=0; j<((siz1/2)+1); j++)
//   {
//     tmp0=tmp0->next;
//   }
//   Node* tmp=tmp0;
//     while(tmp!=NULL)
//   {
//     cout<<tmp->val<<" ";
//     tmp=tmp->next;
//   }
// }
// int main()
// {
// Node* head=NULL;
// Node* tail=NULL;
// int T;cin>>T;
// // while(T--)
// // {
// //   int idx,val;
// //    cin>>idx>>val;
// //   // if(val==-1 && idx==-1) break;
// //   // insert_at_tail(head,tail,val);

// // }
// print_linked_list(head);


//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int n;cin>>n;
//     int arr[n],f;
//     for(int j=0; j<n; j++)
//     {
//       cin>>arr[j];
//     }
//     vector<int>fre(11,0);
//     for(int j=0; j<n; j++) fre[arr[j]++, f=max(f,fre[arr[j]]);
//   }
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

  
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
//     int mid=(a+b+c)-(min({a,b,c})+max({a+b+c}));
//     int alice=(max({a+b+c})*100)+(mid*10)+(min({a,b,c}));

    
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// bool search_b(vector<int>&v,int  target)
// {
 

//  int high=0, low=v.size()-1;
//  while(low<=high)
//  {
//   int mid=((high-low)/2)+low;

//    if(v[mid]==target)
//  {
//   return true;
//  }
//   if(v[mid]>target)
//   {
//     high=mid-1;
//   }
//   else
//   {
//     low=mid+1;
//   }

//  }
//  return false;
// }
// int main()
// {
//   int N,target; cin>>N>>target;
// vector<int>v(N+1);
// for(int j=0; j<N; j++)
// {
//   cin>>v[j];
// }
//   cout<<search_b(v,target);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//   int val;
//   Node *next;
//   Node *prev;
//   Node(int val)
//   {
//     this->val = val;
//     this->next = NULL;
//     this->prev = NULL;
//   }
// };
// int sz2 = 0;
// void insert_at_head(Node *&head, Node *&tail, int val)
// {
//   Node *newnode = new Node(val);
//   if (head == NULL)
//   {
//     sz2++;
//     head = newnode;
//     tail = newnode;
//     return;
//   }
//   sz2++;
//   newnode->next = head;
//   head->prev = newnode;
//   head = newnode;
// }
// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//   Node *newnode = new Node(val);
//   if (head == NULL)
//   {
//     sz2++;
//     head = newnode;
//     tail = newnode;
//     return;
//   }
//   sz2++;
//   tail->next = newnode;
//   newnode->prev = tail;
//   tail = newnode;
// }
// void insert_at_any_pos(Node *&head, Node *tail, int idx, int val)
// {
//   Node *newnode = new Node(val);
//   Node *tmp = head;
//   for (int j = 0; j < idx; j++)
//   {
//     tmp = tmp->next;
//   }
//   sz2++;
//   newnode->next = tmp->next;
//   newnode->next->prev = newnode;
//   tmp->next = newnode;
//   newnode->prev = tmp;
// }

// void print_linked_list(Node *head,Node* tail)
// {
//   Node *tmp = head;
//   while (tmp != NULL)
//   {
//     cout << tmp->val << " ";
//     tmp = tmp->next;
//   }
//   cout<<endl;
//   Node* tmp2=tail;
//   while(tmp2!=NULL)
//   {
//     cout<<tmp2->val<<" ";
//     tmp2=tmp2->prev;
//   }
//   cout<<endl;
// }
// int main()
// {
//   Node *head = NULL;
//   Node *tail = NULL;

//   int T;
//   cin >> T;
//   while (T--)
//   {
//     int idx, val;
//     cin >> idx >> val;
//     if (idx == 0)
//     {
//       insert_at_head(head, tail, val);
//       print_linked_list(head,tail);
//     }
//     else if (idx == sz2)
//     {
//       insert_at_tail(head, tail, val);
//       print_linked_list(head,tail);
//     }
//     else if(idx>sz2)
//     {
//       cout<<"Invalid"<<endl;
//     }
//     else
//     {
//       insert_at_any_pos(head, tail, (idx-1), val);
//       print_linked_list(head,tail);
//     }
//   }

//   return 0;
// }


/*contest*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int a,b,c;cin>>a>>b>>c;
// int a1=((a*100)+(b*10)+c) +((b*100)+(c*10)+a)+((c*100)+(a*10)+b);
//   cout<<a1;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;
//   cin >> T;
//   while (T--)
//   {
//     int N;
//     cin >> N;
//     vector<int> v(N);
//     for (int j = 0; j < N; j++)
//     {
//       cin >> v[j];
//     }
//     int cnt = 0;
//     for (int j = 0; j < N; j++)
//     {
//       if (v[j] % 2 == 1)
//       {
//         cnt++;
//       }
//     }
//     cout << cnt << endl;
//   }
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int s;cin>>s;
//     cout<<(24*1000)*s<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   long long int A,B;cin>>A>>B;
//   if(A%B==0)cout<<(long long)A/B;
//   else cout<<(long long)A/B+1;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n,m;cin>>n>>m;
//   stack<int> st1;
//   stack<int> st2;
//   while(n--)
//   {
//     int val; cin>>val;
//     st1.push(val);
//   }
//   while(m--)
//   {
//     int val; cin>>val;
//     st2.push(val);
//   }

//   bool flag=1;
//   if(n!=m)
//   {
//     cout<<"NO";
//   }
//   else if(n==m)
//   {
//     while(!st1.empty())
//     {
//         if(st1.top()==st2.top())
//         {
//           flag=0;
//         }
//         st1.pop();
//         st2.pop();
//     }
//   }
//   if(flag==1)cout<<"NO";
//   else cout<<"YES";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n;
//   cin >> n;
//   stack<int> st;
//   stack<int> st2;
//   while (n--)
//   {
//     int val;
//     cin >> val;
//     st.push(val);
//   }

//   while (!st.empty())
//   {
//     st2.push(st.top());
//     st.pop();
//   }

//   while (!st2.empty())
//   {
//     cout << st2.top()<<" ";
//     st2.pop();
//   }
//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class stc
// {
// public: 
//    vector<int>v;
//    void push(int val)
//    {
//     v.push_back(val);
//    }
//    int pop()
//    {
//      v.pop_back();
//    }

//    int size()
//    {
//     return v.size();
//    }
//    int top()
//    {
//      return v.back();
//    }
//    bool empty()
//    {
//     return v.size()==0;
//    }
// };
// int main()
// {

//  stc st;
//  stc st2;
// int N,M;cin>>N;int val1,val2;
// while(cin>>val1)
// {
//   st.push(val1);
// }
// cin>>M;
// while(cin>>val2)
// {
//   st2.push(val2);
// }

// bool flag=false;
// if(N!=M)
// {
//   cout<<"NO";
// }
// else if(N==M)
// {
//   while(N--)
//   {
//     if(st.top()==st2.top())
//     {
//       flag=true;
//     }
//     st.pop(); st2.pop();
//   }
// }
// if(flag==true)cout<<"YES";

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here

// int N,X;cin>>N>>X;
// int arr[N];
// bool flag=false;
// for(int j=0; j<N; j++)
// {
//     cin>>arr[j];
//     if(arr[j]==X)
//     {
//        flag=true;
//     }
// }
// if(!flag)cout<<"NO";
// else cout<<"YES";
// return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   queue<int>q;
//   int n; cin>>n;
//   for(int j=0; j<n; j++)
//   {
//     int val; cin>>val;
//     q.push(val);
//   }
//   stack<int> st;
//   for(int j=0; j<n; j++)
//   {
//     st.push(q.front());
//     q.pop();
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

// int main() {
// 	// your code goes here
// int T;cin>>T;
// while(T--)
// {
//     int n;cin>>n;
//     string s;cin>>s;
//     bool flag_I=false,flag_N_I=false,flag_N_S=false;
//     for(int j=0; j<n-1; j++)
//     {
//         for(int i=j+1; i<n; i++)
//         {
//             if(s[j]=='N' && s[i]=='I')
//         {
//             flag_I=true;
//         }
//         else if(s[j]=='N' && s[i]=='Y')
//         {
//             flag_N_I=true;
//         }
//         else 
//         {
//             flag_N_S=true;
//         }

//         }
//     }
//     if(flag_I==true)cout<<"INDIAN";
//     else if(flag_N_I==true) cout<<"NOT INDIAN";
//     else cout<<"NOT SURE";

//     cout<<endl;
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// //   char name;
// //   for(name='a'; name<='j'; name=name+1)
// //   {
// //     cout<<name<<" ";
// //   }
// int n,p;cin>>n>>p;
// // for(int j=1; j<n; j=j*5)
// // {
// //     cout<<j<<" ";
// // }
// // int sum=1;
// // for(int j=0; j<p;j++)
// // {
// //       sum *=n;
// // }
// // cout<<sum;
// // int sum=0;
// // for(int j=1;j<=5;j++)
// // {
// //   sum +=j;
// // } cout<<sum;
// cout<<(50*(50+1))/2;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// queue<int>q;
// int n;cin>>n;
// for(int j=0;j<n;j++)
// {
//     int val;cin>>val;
//     q.push(val);
// }
// stack<int>st;
// for(int j=n-1; j>=0; j--)
// {
//    st.push(q.front());
//    q.pop();
// }

// for(int j=0; j<n; j++)
// {
//     cout<<st.top()<<" ";
//     st.pop();
// }

//     return 0;
// }





/*01/15/2025*/ // problem 2nd.. solved done
// #include <bits/stdc++.h>
// using namespace std;

// class mynode
// {
// public:
//     list<int> ls, q;

//     void qpush(int val)
//     {
//         q.push_back(val);
//     }
//     void qpop()
//     {
//         q.pop_front();
//     }
//     int qfront()
//     {
//         return q.front();
//     }
//     void lspush(int val)
//     {
//         ls.push_back(val);
//     }
//     void lspop()
//     {
//         ls.pop_back();
//     }
//     int lstop()
//     {
//         return ls.back();
//     }
// };
// int main()
// {
//     mynode st, q;
//     int N, M;
//     cin >> N >> M;
//     bool flag = false;
//     for (int j = 0; j < N; j++)
//     {
//         int val;
//         cin >> val;
//         st.lspush(val);
//     }

//     for (int j = 0; j < M; j++)
//     {
//         int val;
//         cin >> val;
//         q.qpush(val);
//     }

//     if (N == M)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if (st.lstop() == q.qfront())
//             {
//                 flag = true;
//             }
//             else
//             {
//                 flag = false;
//                 break;
//             }
//             st.lspop();
//             q.qpop();
//         }
//     }

//     (flag == false) ? cout << "NO" : cout << "YES";
//     return 0;
// }

/*Is It Valid*/ //problem number 3rd;
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
    
//     stack<char> st;
//     int n,cnt0=0,cnt1=0;
//     while (n--)
//     {
//         string s;
//         cin >> s;
//    for(char c : s)
//    {
//      if(c=='0')
//      {
//      if(cnt1>0)
//      cnt1--;
//      else 
//      cnt0++;
//      }
//      else if(c=='1')
//      {
//         if(cnt0>0)
//             cnt0--;
//             else 
//             cnt1++;
//      }
//    }
//    cout<<(cnt1==0 && cnt0==0 ? "YES" : "NO")<<endl;
// }
//     return 0;
// }

/*Queries Again*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// int sz = 0;
// void insert_at_head(Node *&head, Node *&tail, int idx, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         sz++;
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     sz++;
//     newnode->next = head;
//     head->prev = newnode;
//     head = newnode;
// }
// void insert_at_tail(Node *&head, Node *&tail, int idx, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         sz++;
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     sz++;
//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }
// void insert_at_any_pos(Node *head, int idx, int val)
// {
//     Node *newnode = new Node(val);
//     Node *tmp = head;
//     for (int j = 0; j < idx; j++)
//     {
//         tmp = tmp->next;
//     }
//     sz++;
//     newnode->next = tmp->next;
//      newnode->prev = tmp;  
//     if(tmp->next !=NULL) 
//     tmp->next->prev = newnode;
    
//      tmp->next = newnode;
// }
// void print_forwar_L(Node *head, Node *tail)
// {
//     Node *tmp = head;
//     cout << "L -> ";
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;

//     Node *tmp2 = tail;
//     cout << "R -> ";
//     while (tmp2 != NULL)
//     {
//         cout << tmp2->val << " ";
//         tmp2 = tmp2->prev;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int idx, val;
//         cin >> idx >> val;
//         if (idx == 0)
//         {
//             insert_at_head(head, tail, idx, val);
//             print_forwar_L(head, tail);
//         }
//         else if (sz == idx)
//         {
//             insert_at_tail(head, tail, idx, val);
//             print_forwar_L(head, tail);
//         }
//         else if (idx >= 1 && idx < sz)
//         {
//             insert_at_any_pos(head, (idx-1), val);
//             print_forwar_L(head, tail);
//         }

//         else
//             cout << "Invalid" << endl;
//     }

//     return 0;
// }


/*last problem...*/
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
//   public: 
//   string val;
//   Node* next;
//   Node* prev;
// Node(string val)
// {
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
// }
// };
// void insert_at_tail(Node* &head,Node* &tail,string val)
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
// bool check_have(Node* head,string val)
// {
//    while(head!=NULL)
//    {
//      if(head->val == val)
//        return true;

//         head=head->next;
//    }
//    return false;
// }
// string   check_prev(Node* head,Node* curr)
// {
//     Node* tmp=head;
//    while(tmp!=NULL)
//    {

//       if(tmp->val==curr->val)
//       {
//         if(tmp->prev!=NULL)
//         {
//         cout<<tmp->prev->val;
//         return tmp->prev->val;
//         }
//         else 
//         {
//             cout<<"Not Available";
//             return tmp->val;
//         }
//       }
//       tmp=tmp->next;
//    }
//    return "Not Available";
// }
// string check_next(Node* head,Node* curr)
// {
// Node* tmp=head;
// while(tmp!=NULL)
// {
//     if(tmp->val==curr->val)
//     {
//         if(tmp->next!=NULL)
//         {
//            cout<<tmp->next->val;
//            return tmp->next->val;
//         }
//         else
//         {
//             cout<<"Not Available"; 
//             return tmp->val; 
//         }
//     }
//     tmp=tmp->next;
// }
// return "Not Available";
// }
// int main()
// {
// Node* head=NULL;
// Node* tail=NULL;
// Node* curr=NULL;
// string s;
// while(true)
// {
//    cin>>s; if(s=="end") break;
//    insert_at_tail(head,tail,s);
// }
// int T;cin>>T;
// string key_s,name_s;
// for(int j=0; j<T; j++)
// {
//   cin>>key_s;
//   if(key_s=="visit")
//   {
//     cin>>name_s;
//     if(check_have(head,name_s) == true)
//    {
//      cout<<name_s;
//       curr=new Node(name_s);
//    }
//     else cout<<"Not Available";
    
//   }
//   else if(key_s=="prev") 
//   {
   
//     curr=new Node( check_prev(head,curr));
//   }
//   else if(key_s=="next")
//   {
//      curr=new Node(check_next(head, curr));
//   }
//  if(j<T-1) cout<<endl;
// }
  


//     return 0;
// }

/*Weekly Practice Problem Solbing Contest - Phitron Mentorship*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;cin>>N;
//   string s;
//   cin>>s;
//   int cntA=0,cntT=0; char ch;
//   for(int j=0; j<N; j++)
//   {
//     (s[j]=='A')? cntA++ : cntT++;
//     ch=s[N-2];
//   }
//   if(cntA>cntT) cout<<"A";
//   else if(cntA<cntT)cout<<"T";
//   else if(cntA==cntT)cout<<ch;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;cin>>N;
//   string s;cin>>s;
//   for(int j=0; j<N; j++)
//   {
//     cout<<s[j]<<s[j];
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// char arr[65];
// for(int j=1; j<64; j++)
// {
//     cin>>arr[j];
// }

// for(int j=1; j<=64; j++)
// {
//     if(arr[j]=='*')
//     cout<<j;
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int H,W;
//   cin>>H>>W;
//   while(H--)
//   {
//   for(int j=0; j<W;j++)
//   {
   
//      int arr[W];
//      cin>>arr[j];
//      if(arr[j]==0)cout<<".";
//      else cout<<char(64+arr[j]);
    
//   }
//   cout<<endl;
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;cin>>n;
//     for(int j=2; j*j<=n-1; j++)
//     {
//         if(n%j==0) cout<<n%j;
  
//     }
  
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int a,b,c;cin>>a>>b>>c;
//     if((a-1)<(abs(b-c)+(c-1)))
//     cout<<1;
//     else if((a-1)>(abs(b-c)+(c-1)))
//     cout<<2;
//     else cout<<3;

//     cout<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T;cin>>T;
// while(T--)
// {
//     int a,b;
//     cin>>a>>b;
//  int screen=b/2;
//  int baki=7*screen;
//  if(b%2==1)
//  {
//     screen++;
//     baki +=11;
//  }
// if(a>baki)
// {
//     a -=baki;
//     screen +=a/15;
//     if(a%15!=0)
//     {
//         screen++;
//     }
    
// }
// cout<<screen<<endl;
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N;
//         cin >> N;
//         int arr[N];
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr[j];
//         }
//         sort(arr, arr + N);
//         int mn = arr[0], mx = arr[N - 1], i = 0, cnt = 0, cnt2 = 0, j = N - 1;
//         if (mn % 2 == mx % 2)
//             cout << 0 << endl;
//         else
//         {

//             while (arr[i] % 2 != mx % 2)
//             {
//                 i++;
//                 cnt++;
//             }
//             while (mn % 2 != arr[j] % 2)
//             {
//                 j--;
//                 cnt2++;
//             }
//             cout << min(cnt, cnt2) << endl;
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int a,b,c;cin>>a>>b>>c;
//     if((a+b+c)%3==0)cout<<"YES";
//     else cout<<"NO";

//     cout<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int N;cin>>N;
//     string s;cin>>s;

//     int cnt_0=0,cnt_1=0,ans=0;
//     for(int j=0; j<N; j++)
//     {
//          (s[j]=='0')? cnt_0++ : cnt_1++;
//     }
    
//     for(char ss: s)
//     {
//         if(ss=='1')
//         {
//             ans +=cnt_1-1;
//         }
//         else 
//         {
//             ans +=cnt_1+1;
//         }
//     }
//     cout<<ans<<endl;
//   }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         for (int j = 1; j < s.size(); j++)
//         {
//             if (s[j] == s[j - 1])
//                 break;

//             if (s[j] == 'j')
//             {
//                 s.insert(s.begin() + j, 'z');
//             }
//             else
//             {
//                 s.insert(s.begin() + j, 'j');
//             }
//         }
//         cout << s << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int N;cin>>N;
//     string s;cin>>s;
//     int cnt=0;
//     for(int j=0; j<N; j++)
//     {
//         if(s[j]=='.')
//         {
//             cnt++;
//         }
//     }
//     bool flag=false;
//  for(int j=0; j<N; j++)
//  {
    
//     if(s[j]=='.'&& s[j+1]=='.' && s[j+2]=='.')
//     {
//         flag=true;
//     }
   
//  }
//  cout<<(flag==true ? 2 : cnt)<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int  N;cin>>N;
//     vector<char>ve={'a','e','i','o','u'};
//      string ans="";
//      int j=0;
//     while(N--)
//     {
//       ans +=ve[j];
//        j++;
//        if(j==5) j=0;
//     }
//     sort(ans.begin(),ans.end());
//     cout<<ans<<endl;
//   }
//     return 0;
// }


/*Weekly Practice Problem Solving Contest -2(Phitron Mentorship)*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   string s;cin>>s;
//   int sz=s.size();
//   for(int j=0; j<sz; j++)
//   {
//     if(s[j]=='0')cout<<1;
//     else cout<<0;
//   }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     string s;cin>>s;
//     int sz=s.size();
//     for(int j=0; j<sz; j++)
//     {
//         if(s[j]=='a' && s[j+1]=='b'&& s[j+2]=='c')
//         {
//             cout<<"YES1"<<endl;break;
//         }
//         swap(s[j],s[j+1]);
//         if(s=="abc")
//         {
//             cout<<"YES2"<<endl;break;
//         }
//         swap(s[j+1],s[j+2]);
//         if(s=="abc")
//         {
//             cout<<"YES3"<<endl;break;
//         }
//         swap(s[j],s[j+2]);
//         if(s=="abc")
//         {
//             cout<<"YES4"<<endl;break;
//         }
//     }
//   }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string s;
//         cin >> s;
//         int sz = s.size();
//         cout << ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S') ? "YES" : "NO") << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;cin>>T;
//   while(T--)
//   {
//     int N,X;cin>>N>>X;
//    cout<<(X>=N ? "YES" : "NO")<<endl;
//   }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int x,y;
//   while(cin>>x>>y)
//   {
//     if(x>0 && y>0)
//     {
//         cout<<min(x,y)<<" "<<max(x,y);
//     }
//     cout<<endl;
//   }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int T;cin>>T;
// while(T--)
// {
//   int X,Y;cin>>X>>Y;
//   int sum=0;
//   for(int j=min(X,Y)+1; j<max(X,Y); j++)
//   {
//    if(j%2==1) sum +=j;
//   }
//   cout<<sum<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int N,k=1,f=4; cin>>N; 
// for(int j=0; j<N; j +=1)
// {
//   for(int l=0; l<f;l++)
//   {
//     cout<<" ";
//   }
//   for(int i=0; i<k;  i +=1)
//   {
//     cout<<"*";
//   }
//   cout<<endl;
//   k +=2;
//   f--;
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int k=1;
//   for(int j=0;j<5; j++)
//   {
//     for(int i=1; i<=k; i++)
//     {
//       cout<<i<<" ";
//     }
//     cout<<endl;
//     k++;
//   }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int N,k=1,f=4; cin>>N; 
// for(int j=0; j<N; j +=1)
// {
//   for(int l=0; l<f;l++)
//   {
//     cout<<" ";
//   }
//   for(int i=0; i<k;  i +=1)
//   {
//     cout<<"*";
//   }
//   cout<<endl;
//   k +=2;
//   f--;
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int N,k2=1,f=4; cin>>N;   
// for(int j=1; j<=2*N-1; j +=1)
// {
//   for(int l=0; l<f;l++)
//   {
//     cout<<" ";
//   }
 
  
//    for(int a=0; a<k2; a++){
//     cout<<"*";
//    }

//   cout<<endl;
//   (j>=N)
//   if (j >= 5)
//   {

//     k2 -= 2;
//     f++;
//   }
//   else
//   {
//     k2 += 2;
//     f--;
//   }
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void fun(int x[])
// {
//   x[0]=100;
// }
// int main()
// {
// int x[5]={10};
// fun(x);
// cout<<x[0];
  
//     return 0;
// }

/*contest*//*01/23/2026*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   long long int N,K;cin>>N>>K;
//   cout<<K/N<<" "<<K%N;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//  int N;cin>>N;
//  vector<int>v(N+1);
//  for(int j=0; j<N; j++)
//  {
//   cin>>v[j];
//     if(v[j]%2==0)cout<<v[j]<<" ";
//  } 
// //  for(int j=0; j<N; j++)
// //  {
// //   if(v[j]%2==0)cout<<v[j]<<" ";
// //  }

//   for(int j=0; j<N; j++)
//  {
//   if(v[j]%2==1)cout<<v[j]<<" ";
//  }
//     return 0;
// }

/*4 number problem*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;cin>>N;
//   int v[N+1];
//   for(int j=0; j<N; j++)
//   {
//    cin>>v[j]; 
//   }
//   int v2[9]={0};
//   for(int j=0+1; j<N-1; j++)
//   {
//     if(v[j]<v[j-1] && v[j]<v[j+1])
//     {
//          v2[v[j]]++;
//     }
//   }
//   int Q;cin>>Q;
//   while(Q--)
//   {
//   int sum=0,L,R;cin>>L>>R;
// for(int j=L; j<=R;j++ )
// {
//     if(v2[j]!=0) sum++;
// }
// cout<<sum<<endl;
//   }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;cin>>N; 


//  int row=1,col=1;

//  for(int j=1; j<=N; j++)
//  {
//    for(int i=1; i<=N; i++ )
//    {
//     if(j==1)
//     {
//       cout<<i;
//     }
//     else if(j==N)
//     {
//       cout<<(N-i)+1;
//     }
//     else if(i==1)
//     {
//       cout<<j;
//     }
//     else if(i==N)
//     {
//       cout<<(N-j)+1;
//     }
//     else 
//     {
//       cout<<" ";
//     }
//    }
//   cout<<endl;
//  }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N;
//   cin >> N;
//   list<int> e,o;
//   while (N--)
//   {
//     int val;
//     cin >> val;
  
//     if(val%2==0)  e.push_back(val);
//     else o.push_back(val);
//   }
//   for (int myl : e)
//   {
//       cout << myl << " ";
//   }
//   for (int myl : o)
//   {
//       cout << myl << " ";
//   }

//   return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//  int N,K;cin>>N>>K;
//  int v[N+1];
//  for(int j=0; j<N; j++)
//  {
//   cin>>v[j];
//  } 
// for(int j=0; j<N; j++)
// {
//   for(int i=j+1; i<N; i++)
//   {
//     if(v[j]>v[i])
//     {
//       swap(v[j],v[i]);
//     }
//   }
// }
//  cout<<v[1];
 
//     return 0;
// }


// #include <bits/stdc++.h> 
// using namespace std;
// char findFirst(string s) {
//     // Write your code here.
//     for(int j=0; j<s.size()-1; j++)
//     {
//         for(int i=j+1; i<s.size(); i++)
//         {
//             if(s[j]==s[i])
//             {
              
//                return s[i] ;
//             }
//         }
//     }
//     return -1;
// }
// int main()
// {
//   string s;cin>>s;
//  cout<<  findFirst(s);

//   return 0;
// }


/*Final Exam*/
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
// int sum_node(Node* root)
// {
//    queue<Node *>q;
//    int sum=0,sum2=0;
//    if(root!=NULL)q.push(root);
//    while(!q.empty())
//    {
//     Node* prrent=q.front();
//     q.pop();
//     if(prrent->left==NULL && prrent->right==NULL) 
//   {
//     sum2 +=prrent->val;
//   }
//     else 
//     {
//         sum +=prrent->val;
//     }

//     if(prrent->left)
//     q.push(prrent->left);
//     if(prrent->right)
//     q.push(prrent->right);
//    }
//    return sum;
// }
// Node* level_order()
// {
//   int val;cin>>val;
//   queue<Node *>q;
//   Node* root;
//   if(val==-1) root=NULL;
//   else root=new Node(val);
//   if(root!=NULL) q.push(root);
//   while(!q.empty())
//   {
//     Node* perent=q.front();
//     q.pop();

//     int L,R;cin>>L>>R;
//     Node* myLeft;Node* myRight;
//     if(L==-1) myLeft=NULL;
//     else myLeft = new Node(L);
//     if(R==-1) myRight=NULL;
//     else myRight=new Node(R);

//     perent->left=myLeft;
//     perent->right=myRight;

//     if(perent->left)
//     q.push(perent->left);
//     if(perent->right)
//     q.push(perent->right);
//   }
//   return root;
// }
// int main()
// {
//  Node* root=level_order();
//  cout<<sum_node(root); 
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
// void leaf_node_print_backword(Node* root)
// {
// stack<int>st;
// queue<Node *>q;
// if(root!=NULL) 
// q.push(root);
// while(!q.empty())
// {
//   Node* p=q.front();
//   q.pop();

//   if(p->left==NULL && p->right==NULL)
//   st.push(p->val);

//   if(p->left)
//   q.push(p->left);
//   if(p->right)
//   q.push(p->right);
// }
// while(!st.empty())
// {
//   cout<<st.top()<<" ";
//   st.pop();
// }
// }
// Node* level_order()
// {
//   int val;cin>>val;
//   queue<Node *>q;
//   Node* root;
//   if(val==-1) root=NULL;
//   else root=new Node(val);
//   if(root!=NULL) q.push(root);
//   while(!q.empty())
//   {
//     Node* p=q.front();
//      q.pop();
//      int L,R;cin>>L>>R;
//      Node* myLeft;Node* myRight;
//      if(L==-1) myLeft=NULL;
//      else myLeft=new Node(L);
//      if(R==-1)myRight=NULL;
//      else myRight=new Node(R);

//      p->left=myLeft;
//      p->right=myRight;

//      if(p->left)
//      q.push(p->left);
//      if(p->right)
//      q.push(p->right);
//   }
//   return root;
// }
// int main()
// {

//  Node* root=level_order();
//   leaf_node_print_backword(root);


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
// int cnt_node(Node* root)
// {
//   int sum=0;
//   vector<int>v;
//   queue<Node *>q;
//   if(root!=NULL)q.push(root);
//   while(!q.empty())
//   {
//     Node* p=q.front();
//     q.pop();
//     if(p->left==NULL && p->right==NULL)
//     v.push_back(p->val);
//     else v.push_back(p->val);

//     if(p->left)
//     q.push(p->left);
//     if(p->right)
//     q.push(p->right);
//   }
//   return v.size();
// }
// int max_level(Node* root)
// {
//   if(root==NULL) return 0;

//   if(root->left==NULL && root->right==NULL) return 0;

//   int L=max_level(root->left);
//   int R=max_level(root->right);
//   return max(L,R)+1;
// }
// Node* level_order()
// {
//   int val;cin>>val;
//   queue<Node *> q;
//   Node* root;
//   if(val==-1) root=NULL;
//   else root=new Node(val);
//   if(root!=NULL) q.push(root);
//   while(!q.empty())
//   {
//     Node* p=q.front();
//     q.pop();
//     int L,R;cin>>L>>R;
//     Node* myLeft; Node* myRight;
//     if(L==-1) myLeft=NULL;
//     else myLeft=new Node(L);
//     if(R==-1) myRight=NULL;
//     else myRight=new Node(R);

//     p->left=myLeft;
//     p->right=myRight;

//     if(p->left)
//     q.push(p->left);
//     if(p->right)
//     q.push(p->right);
//   }
//   return root;
// }
// int main()
// {
// Node* root=level_order();
//   int death=max_level(root)+1;
//   int base=cnt_node(root);
//   if((pow(2,death)-1)==base)
//   cout<<"YES";
//   else cout<<"NO";
 
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
// Node* level_order_input()
// {
//   int val;cin>>val;
//   queue<Node *>q;
//   Node* root;
//   if(val==-1)root=NULL;
//   else root=new Node(val);
//   if(root!=NULL)q.push(root);
//   while(!q.empty())
//   {
//     Node* p=q.front();
//     q.pop();
//     int L,R;cin>>L>>R;
//     Node* myLeft; Node* myRight;
//     if(L==-1) myLeft=NULL;
//     else myLeft=new Node(L);
//     if(R==-1) myRight=NULL;
//     else myRight=new Node(R);

//     p->left=myLeft;
//     p->right=myRight;
//     if(p->left)
//     q.push(p->left);
//     if(p->right)
//     q.push(p->right);
//   }
//   return root;
// }
// void outer_left(Node* root)
// {
  
//   if(root->left)
//   {
//    outer_left(root->left);   //root->left=root;
//   }
//   else if(root->right)
//   {
//   outer_left(root->right);
//   // root=root->left;
//   }
//   cout<<root->val<<" ";
 
// }
// void outer_right(Node* root)
// {
//   cout<<root->val<<" ";
//   if(root->right)
//   outer_right(root->right);
//   else if(root->left)
//   outer_right(root->left);
// }
// int main()
// {
//  Node* root=level_order_input();
//   if(root->left)outer_left(root->left);
//   cout<<root->val<<" ";
//   if(root->right)outer_right(root->right);
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
// Node* level_order_input()
// {
//   int val;cin>>val;
//   queue<Node*>q;
//   Node* root;
//   if(val==-1)root=NULL;
//   else root=new Node(val);
//   if(root) q.push(root);
//   while(!q.empty())
//   {
//     Node* p=q.front();
//     q.pop();
    
//     int L,R;cin>>L>>R;
//     Node* myLeft; Node* myRight;
//     if(L==-1)myLeft=NULL;
//     else myLeft=new Node(L);
//     if(R==-1)myRight=NULL;
//     else myRight=new Node(R);

//     p->left=myLeft;
//     p->right=myRight;

//     if(p->left)
//     q.push(p->left);
//     if(p->right)
//     q.push(p->right);
//   }
//   return root;
// }
// int cnt_level(Node* root)
// {
//   if(root==NULL) return 0;
//   if(root->left==NULL && root->right==NULL) return 0;
//   int L=cnt_level(root->left);
//   int R=cnt_level(root->right);
//   return max(L,R)+1;
// }
// void level_print(Node* root,int x)
// {
//   queue<pair<Node* ,int>>q;
//   if(root)q.push({root,0});
//    int cnt_le=cnt_level(root); 
//   while(!q.empty())
//   {
//     pair<Node*,int>p=q.front();
//     q.pop();
//     Node* nod=p.first;
//     int level=p.second;
//     if(level==x)cout<<nod->val<<" ";
//     else if(x>cnt_le) {cout<<"Invalid"; return ;}

//     if(nod->left)
//     q.push({nod->left,level+1});
//     if(nod->right)
//     q.push({nod->right,level+1});
//   }
// }

// int main()
// {

// Node* root=level_order_input();
// int x;cin>>x;
//  level_print(root,x);

//     return 0;
// }

/*Exam end here*/


// #include <bits/stdc++.h>
// using namespace std;
//  bool canMakeArithmeticProgression(vector<int>& arr) {
//         int sum=abs(arr[0]-arr[1]);
//         int sz=arr.size();
//         bool f=false,l=false;
//         for(int j=0; j<sz-1; j++)
//         {
//             if(abs(arr[j]-arr[j+1])==sum)
//             {
                
//                 // cout<<arr[j]-arr[j+1]<<" ";
//                 f=true;
//             }
//         }
   
//         for(int j=sz-1; j>=0; j--)
//         {
//             if(abs(arr[j]-arr[j+1])==sum)
//             {
               
//                 // cout<<arr[j]-arr[j+1]<<" ";
//                 l=true;
//             }
//         }
//         return l==f;
//     }
// int main()
// {
// int n;cin>>n;
// vector<int>v(n);
// for(int j=0; j<n;j++)
// {
// cin>>v[j];
// }
// cout<<canMakeArithmeticProgression(v);
  
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// vector<int>v={1,2,3,4,5};
// int sz=v.size(),sz2=sz*2;
// vector<int>v2(sz2);



// for(int j=0; j<sz; j++)
// {
//    v2[j]=v[j];

// }
// for(int j=0; j<sz; j++)
// {
//     v2[sz+j]=v[j];
// }

// for(int j=0; j<sz2; j++)
// {
//     cout<<v2[j]<<" ";
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// // 	// your code goes here
// // int T;cin>>T;
// // while(T--)
// // {
// //     int N,X,K;cin>>N>>X>>K;
// //     cout<<X%K<<endl;
// // }
// cout<<1%3;
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

  
//     return 0;
// }