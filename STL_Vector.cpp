// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// //   vector<int> v;
// // vector<int>v(10);
// // vector<int> v(10,0);
// // vector<int>v(5,1);
// // vector<int>v2(v);
// int arr[5]={1,2,3,4,5};
// vector<int>v(arr,arr+5);
// for(int j=0; j<v.size(); j++)
// {
//     cout<<v[j]<<" ";
// }
// //   cout<<v.size();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int arr[5]={1,2,3,4,5};
//   vector<int> v(arr,arr+5);
// //   v.push_back(6);
//     cout<<v[5]<<endl;
//     // vector<int>v={1,2,3,4};
//     // v.pop_back();
//     // v.insert(v.begin()+3,20);
//     // for(auto xx: v)
//     // {
//     //     cout<<xx <<" ";
//     // }
//     // cout<<endl;
//         v.erase(v.begin()+2,v.end());
//     for(auto xx: v)
//     {
//         cout<<xx <<" ";
//     }
//     cout<<endl;
// v.resize(2);
// v.resize(4);
// for(auto x: v)
// {
//     cout<<x<<" ";
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int arr[5]={1,2,3,4};
//   vector<int>v={1,2,3,4,5};
//   vector<int>v1 ={1,2,3,4};
//   for(auto x:v)
//   {
//     cout<<x<<" ";
//   }
// //   cout<<endl<<v.max_size();
// cout<<endl<<v1.capacity();
// v1.clear();
// cout<<endl<<v1.size();
// // for(auto x:v1)
// // {
// //     cout<<x<<" ";
// // } // not working now this is 
// // cout<<endl<<v1[1]; this is working
// // cout<<endl<<(v1.empty())?cout<<"yes": cout<<"No";
   
// return 0;

// }


/*this is problem ask in support*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   vector<int>v1={1,2,3,4,5};
//   for(auto x : v1)
//   {
//     cout<<x<<" ";
//   }
// v1.clear();
//   cout<<(v1.empty())? cout<<"Yes": cout<<"No";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   vector<int>v={1,2,3,4,5};
//   vector<int>v1;
// //   v.push_back(6);
//   v1=v;
// //   v1.push_back(7);
// //   v.push_back(8);
// //   v1.pop_back();
// //   for(auto x: v1)
// //   {
// //     cout<<x<<" ";
// //   }

// // v.erase(v.begin()+2,v.end());
// // for(auto d:v)
// // {
// //     cout<<d<<" ";
// // }

// // replace(v.begin(),v.end(),2,0);
// // for(auto d:v)
// // {
// //     cout<<d<<" ";
// // }

//  auto it=find(v.begin(),v.end(),51);
//  (it==v.end())?cout<<"Not found" : cout<<"Found";


//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int>v={1,2,3,4,5};
  cout<<v[0]<<endl;
    cout<<v.front()<<endl;
  cout<<v.at(0)<<endl;;
  cout<<v.back()<<endl;
  cout<<v[v.size()-1];

    return 0;
}