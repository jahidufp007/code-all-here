// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int N,q;
//   cin>>N>>q;
//   vector<int>v(N+1);
//   for(int j=1; j<=N; j++)
//   {
//     cin>>v[j];
//   }
//   int l,r;
//   while(q--)
//   {
//     cin>>l>>r;
//     int sum=0;
//     for(int i=l; i<r; i++)
//     {
//         sum +=i;
//     }
//     cout<<sum<<endl;
//   }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N,q;
  cin>>N>>q;
  vector<int>v(N+1);
  for(int j=1;j<=N; j++)
  {
    cin>>v[j];
  }

  vector<int>pre(N+1);
  pre[1]=v[1];
  for(int j=2; j<=N; j++)
  {
    pre[j]=pre[j-1]+v[j];
  }
  
  int l,r,sum=0;
  while(q--)
  {
  cin>>l>>r;
  if(l==1)
  {
     sum=pre[r];
  }
  else 
  {
    sum=pre[r]-pre[l-1];
  }
  cout<<sum<<endl;
  }


    return 0;
}



/*Equilibrium Index*/
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
