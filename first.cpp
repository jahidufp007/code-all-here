// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int x;char ch;
//     double d;
//     cin>>x>>ch>>d;
//      cout<<"Helllo world!" << endl<<"Hello this is Jahid!"<<endl; 
//      cout<<(char)x<<" "<<(int)ch<<" "<<fixed<<setprecision(6) <<d;

//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//   int x;
//   cin>>x;
//   (x%2==0) ? cout<<"Even number." : cout<<"Odd number.";
//     return 0;
// }


/*How to print day name use switch*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     switch(x)
//     {
//     case 1:
//         cout << "Saturday";
//         break;
//     case 2:
//         cout << "Sunday";
//         break;
//     case 3:
//         cout << "Monday";
//         break;
//     case 4:
//         cout << "Tuesday";
//         break;
//     case 5:
//         cout << "Wednesday";
//         break;
//     case 6:
//         cout << "Thursday";
//         break;
//     case 7:
//         cout << "Friday";
//         break;
//     default:
//         cout << "This is rong input!";
//     }
// }




/*How to use switch*/
// #include <iostream>
// using namespace std;
// int main()
// {
//   char ch;
//   cin>>ch;
//   switch(ch)
//   {
//     case 'a':
//           cout<<"vowels";
//           break;
//     case 'e':
//          cout<<"vowels";
//          break;
//     case 'i':
//          cout<<"vowels";
//          break;
//     case 'o':
//          cout<<"vowels";
//          break;
//     case 'u':
//          cout<<"vowels";
//          break;
//     default: 
//          cout<<"consonantss";                           
//   }

//     return 0;
// }


/*How to found min max and swap use <algorithm> bild in fun */
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     cout<<"This is min number: "<<min(x,y)<<endl; 
//     cout<<"This is max number: "<<max(x,y)<<endl;
//     cout<<min({3,6,7,9,2,5,4,2}) <<endl;
//     swap(x,y);
//     cout<<x<<" "<<y;
//     return 0;
// }



/*How to use string in c++*/
// #include <iostream>
// using namespace std;
// int main()
// {
// //     int x;
// //   char s[1001];
// // //   cin>>x;
// // cin.getline(s,1001);
// //   cout<<s;

//   /*another way use string*/
// string s;
// cin>>s;

// cout<<s;
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int x;
//    cin>>x;
//     switch(x)
//     {
//         case 1:
//     }

    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     switch (a)
//     {
//     case 1:
//         cout << "one" << endl;
//         break;
//     case 2:
//         cout << "two" << endl;
//         break;
//     case 3:
//         cout << "three" << endl;
//         break;
//     case 4:
//         cout << "four" << endl;
//         break;
//     case 5:
//         cout << "five" << endl;
//         break;
//     case 6:
//         cout << "six" << endl;
//         break;
//     case 7:
//         cout << "seven" << endl;
//         break;
//     case 8:
//         cout << "eight" << endl;
//         break;
//     case 9:
//         cout << "nine" << endl;
//         break;
//     default:
//         cout << "nine" << endl;
//     }

//     switch (b)
//     {
//     case 1:
//         cout << "one" << endl;
//         break;
//     case 2:
//         cout << "two" << endl;
//         break;
//     case 3:
//         cout << "three" << endl;
//         break;
//     case 4:
//         cout << "four" << endl;
//         break;
//     case 5:
//         cout << "five" << endl;
//         break;
//     case 6:
//         cout << "six" << endl;
//         break;
//     case 7:
//         cout << "seven" << endl;
//         break;
//     case 8:
//         cout << "eight" << endl;
//         break;
//     case 9:
//         cout << "nine" << endl;
//         break;
//     default:
//         cout << "nine" << endl;
//     }

//     (a % 2 == 0) ? cout << "even" << endl : cout << "odd" << endl;
//     (b % 2 == 0) ? cout << "even" : cout << "odd";

//     return 0;
// }




// #include <bits/stdc++.h>
// int sum(int x,int y)
// {
// if(y==0) return 1;
// int demo=x*sum(x,y-1);
// return  demo;
// }
// using namespace std;
// int main()
// {
//     int x,y;
//     cin>>x>>y;
//   int demo=  sum(x,y);
//   cout<<demo;
//     return 0;
// }




// #include <bits/stdc++.h>
// int sum(int x)
// {
// if(x == 1 || x == 2) return 1;
// int demo = sum(x-1)+sum(x-2);
// return demo;
// }
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//   int demo=  sum(x);
//   cout<<demo;
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int* demo;
// void sum()
// {
// int* x=new int;
// *x=10;
// demo=x;
// cout<<"This is answer another fun: "<<*demo;
// return ;
// }
// int main()
// {

// sum();
// cout<<endl<<*demo;
//     return 0;
// 



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int* a= new int[5];
//     for(int j=0; j<5; j++)
//     {
//         cin>>a[j];
//     }

//     for(int j=0; j<5; j++)
//     {
//         cout<<a[j];
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[3];
//     for(int j=0; j<3;j++)
//     {
//         cin>>arr[j];
//     }
//     int arr_b[5];
//     for(int i=0; i<3; i++)
//     {
//         arr_b[i]=arr[i];
//     }
//       arr_b[3]= 40;
//       arr_b[4]=50;
//     for(int k=0; k<5; k++)
//     {
//         cout<<arr_b[k]<<" ";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//    char name[5];
//     int age;
//     int roll;
//     char work[10];
// };
// int main()
// {
// student x;
// cin>>x.name;
// cin>>x.work;
// cin>>x.roll;
// cout<<"This is "<<x.name<<endl<<"My roll number is "<<x.roll<<endl<<"I am a "<<x.work;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int x=10;
// cout<<x;
// cout<<&x<<endl;
// int* ptr=&x;
// cout<<ptr;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     char x;
//     cin >> x;
//     int demo = x;
//     if (demo >= 65 && demo <= 90 || demo >= 97 && demo <= 122)
//     {
//         cout << "ALPHA" << endl;
//         if (demo >= 65 && demo <= 90)
//         {
//             cout << "IS CAPITAL";
//         }
//         else
//         {
//             cout << "IS SMALL";
//         }
//     }
//     else
//     {
//         cout << "IS DIGIT";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int X, Y;
//     cin >> X >> Y;
//      long long int demo=(long long)X*Y;
//     cout << X << " + " << Y << " " << '=' << " " << X + Y << endl;
//     cout << X << " * " << Y << " " << '=' << " " << demo << endl;
//     cout << X << " - " << Y << " " << '=' << " " << X - Y;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int A[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> A[j];
//     }

//     int start = 0, end = N - 1;

//     while (start < end)
//     {
//         swap(A[start], A[end]);
//         start++;
//         end--;
//     }

//     for (int j = 0; j < N; j++)
//     {
//         cout << A[j] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int A, B, C;
//     cin >> A >> B >> C;
 
//        /*This is for min*/
//     if (A <= B && A < C)
//     {
//         cout << A<<" ";
//     }
//     else if (B < A && B < C)
//     {
//         cout << B<<" ";
//     }
//     else
//     {
//         cout << C<<" ";
//     }
//     /*This is for max*/
//     if (A >= B && A > C)
//     {
//         cout << A ;
//     }
//     else if (B > A && B > C)
//     {
//         cout << B;
//     }
//     else
//     {
//         cout << C ;
//     }

 
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int A,B,C;
// cin>>A>>B>>C;
// int min1=INT_MAX;
// min1=max(A,B);
// int demo=(min1,C);
// cout<<demo;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     int A[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> A[j];
//     }
//     int min = INT_MIN;
//     for (int i = 0; i < N; i++)
//     {
//         min = max(A[i], min);
//     }
//     cout << min << " ";
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class student 
// {
// public:
// char name[15];
// int roll;
// int Y_class;
// float gpa;

// };
// int main()
// {
// student a;

// cin.getline(a.name,15);
// cin>>a.roll>>a.gpa>>a.Y_class;

// cout<<"Name: "<<a.name<<"\n"<<"Class gpa: "<<a.gpa<<"\n"<<"Class roll: "<<a.roll<<"\n"<<"Class: "<<a.Y_class;

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class student 
// {
//     public:

//     int roll;
//     double gpa;
//     int class1;
//     student(int R,int G,int C)
//     {
      
//         roll=R;
//         gpa=G;
//         class1=C;
//     }
// };
// int main()
// {
// student jahid_for1(26,3.02,12);
// cout<<jahid_for1.roll<<endl<<jahid_for1.gpa<<endl<<jahid_for1.class1;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class student 
// {
//     public:

//     int roll;
//     float gpa;
//     int class1;
//     student(int R,int G,int C)
//     {
      
//         roll=R;
//         gpa=G;
//         class1=C;
//     }
// };
// student fun()
// {
// student jahid_for1(26,3.02,12);
// return jahid_for1;
// }
// int main()
// {

//     student demo=fun();
// cout<<demo.roll<<endl<<demo.gpa<<endl<<demo.class1;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int A[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> A[j];
//     }
//     int min1 = A[0], max1 = A[0];
//     int count = 0, count2 = 0;
//     // for(int i=0; i<N; i++)
//     // {
//     //     min1=min(min1,A[i]);

//     //     max1=max(max1,A[i]);

//     // }

//     for (int j = 0; j < N; j++)
//     {
//         min1 = min(min1, A[j]);

//         max1 = max(max1, A[j]);
//         if (max1 == A[j])
//         {
//             count = j;
//         }
//         if (min1 == A[j])
//         {
//             count2 = j;
//         }
//     }

//     swap(A[count2], A[count]);
//     for (int i = 0; i < N; i++)
//     {

//         cout << A[i] << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     int A[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> A[j];
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (A[i] > 0)
//         {
//             cout << A[i] << " ";
//         }
//     }

//     for (int j = 0; j < N; j++)
//     {
//         if (A[j] == 0)
//         {
//             cout << A[j] << " ";
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     int A[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> A[j];
//     }

//     int min1 = A[0];
//     int count = 0;
//     for (int i = 0; i < N; i++)
//     {
//         min1 = min(min1, A[i]);
//     }

//     for (int j = 0; j < N; j++)
//     {
//         if (min1 == A[j])
//         {
//             count++;
//         }
//     }
//     if (count % 2 == 1)
//     {
//         cout << "Lucky";
//     }
//     else
//     {
//         cout << "Unlucky";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int N;
// cin>>N;
// int A[N];
// for(int j=0; j<N; j++)
// {
//     cin>>A[j];
// }
// sort(A,A+N);

// for(int i=0; i<N; i++)
// {
//     cout<<A[i]<<" ";
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int A, B;
//     char S;
//     cin >> A >> S >> B;
//     if (S == '<')
//     {
//         if (A < B)
//         {
//             cout << "Right";
//         }
//         else
//         {
//             cout << "Wrong";
//         }
//     }
//     else if (S == '>')
//     {
//         if (A > B)
//         {
//             cout << "Right";
//         }
//         else
//         {
//             cout << "Wrong";
//         }
//     }
//     else if (S == '=')
//     {
//         if (A == B)
//         {
//             cout << "Right";
//         }
//         else
//         {
//             cout << "Wrong";
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int A, B, S;
//     char C, demo;
//     cin >> A >> C >> B >> demo >> S;
//     if (C == '+')
//     {
//         int sum = A + B;
//         if (sum == S)
//         {
//             cout << "Yes";
//         }
//         else
//         {
//             cout << sum;
//         }
//     }
//     else if (C == '-')
//     {
//         int sum = A - B;
//         if (sum == S)
//         {
//             cout << "Yes";
//         }
//         else
//         {
//             cout << sum;
//         }
//     }
//     else if (C == '*')
//     {
//         int sum = A * B;
//         if (sum == S)
//         {
//             cout << "Yes";
//         }
//         else
//         {
//             cout << sum;
//         }
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int N;
// cin>>N;
// int A[N];

// for(int j=0; j<N; j++)
// {
//     cin>>A[j];
// }
// int start =0,end=N-1,flage=1;
// while(start < end)
// {
//     if(A[start] != A[end])
//     {
//           flage=0;
//     }

//     start ++;
//     end--;
// }
// if(flage == 0)
// {
//     cout<<"No";
// }
// else 
// {
//     cout<<"Yes";
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;

//     for (int j = 0; j < T; j++)
//     {
//         int N;
//         cin >> N;
//         int A[N + 1];

//         for (int i = 0; i < N; i++)
//         {
//             cin >> A[i];
//         }
//         int min = INT_MAX;
//         for (int k = 0; k < N; k++)
//         {
//             for (int l = k + 1; l < N; l++)
//             {
//                 if (A[k] + A[l] + l - k < min)
                    
//                 {
//                     min = A[k] + A[l] + (l - k);
//                 }
//             }
//         }

//         cout << min;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//     char N[101];
//     int R;
//     char S;
//     int M_Ma;
//     int C;
//     Student(char Name[101],int Roll,char Section,int Math_marks,int Cls)
//     {
//        strcpy(N,Name);
//         R=Roll;
//         S=Section;
//         M_Ma=Math_marks;
//         C=Cls;

//     }
// };
// int main()
// {
//     Student s1("Jahid",283,'A',99,1);
//     Student s2("Atiq",54,'B',100,1);
//     Student s3("Pios",7,'A',100,1);

//     /*This is found min roll*/
//     char demo[101];
// if(s1.R < s2.R && s1.R < s3.R)
// {
//    strcpy(s1.N,demo);
// }
// else if(s2.R < s1.R && s2.R < s3.R)
// {
//     strcpy(s2.N,demo);
// }
// else if(s3.R <s1.R && s3.R < s2.R)
// {
//     strcpy(s3.N,demo);
// }

// /*This is found max math number*/
//     if(s1.M_Ma >= s2.M_Ma && s1.M_Ma >= s3.M_Ma)
//     {
//         cout<<s1.N;
//     }
//     else if(s2.M_Ma >= s1.M_Ma && s2.M_Ma >= s3.M_Ma)
//     {
//         if(s2.M_Ma == s1.M_Ma || s2.M_Ma == s3.M_Ma || s1.M_Ma == s3.M_Ma || s2.M_Ma == s3.M_Ma == s1.M_Ma)
//         {
//            // if s1 == s2== s3 then check roll
//            if( s2.M_Ma == s3.M_Ma == s1.M_Ma)
//            {
//               if(s2.M_Ma == s1.M_Ma && s2.M_Ma == s3.M_Ma && s1.M_Ma == s3.M_Ma)
//            {
//             cout<<demo;
//            }
//             // else 
//             // {
//             //     cout<<demo;
//             // }     
          
//            }
          
//         }
//         else 
//         {
//              cout<<s2.N;
//         }
       
//     }
//     else if(s3.M_Ma >= s1.M_Ma && s3.M_Ma >= s2.M_Ma)
//     {
//         cout<<s3.N;
//     }
//     else 
  
//     return 0;
// }



/*3.5 */
// #include <bits/stdc++.h>
// using namespace std;
// class dhoni 
// {
//     public:
// int jersey_no;
// char country[101];
// };

// class kohil
// {
// public:
// int jersey_no;
// char country[101];
// };
// int main()
// {
// dhoni* s1=new dhoni();
// kohil* s1s=new kohil();

// cin>>s1->jersey_no;
// cout<<s1->jersey_no;
// strcpy(s1,s1s);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     int A[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> A[j];
//     }
//     sort(A, A + N);
//     for (int j = 0; j < N; j++)
//     {
//         cout << A[j] << " ";
//     }
//     cout << endl;

//     for (int j = N - 1; j >= 0; j--)
//     {
//         cout << A[j] << " ";
//     }
//     return 0;
// }


/*2nd problem here have some prblem*/
// #include <bits/stdc++.h>
// using namespace std;
// int sort_it(int A[],int N,int i)
// {
//     if(i == N)
//     {
//         return 0;
//     }
//     cin>>A[i];
        
// sort_it(A,N,i+1);
//   return 0;
// }
// int main()
// {

// int N;
// cin>>N;
// int A[N];
// int B[N];
// for(int j=0; j<N; j++)
// {
//   cout<<sort_it(A,N,0);
  
// }

//     return 0;
// }

/*2nd problem main solutation*/
// #include <bits/stdc++.h>
// using namespace std;
// int* fun(int N)
// {

// int* A= new int[N];
//   for(int j=0; j<N; j++)
//   { 
//         cin>>A[j];
//   }

// sort(A,A+N);
//   return A;
// }
// int main()
// {
// int N;
// cin>>N;

// int* p= fun(N);

// for(int j=N-1; j>=0; j--)
// {
//     cout<<p[j]<<" ";
// }
//     return 0;
// }

/*This is problem 3*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     char S[101];
//     int countline1 = 0;
//     while (cin.getline(S, 100))
//     {
//         countline1++;
//         int n = strlen(S);
//         sort(S, S + n);

//         if (countline1 > 1)
//         {

//             cout << endl;
//         }
//         for (int j = 0; j < n; j++)
//         {
//             if (S[j] == ' ')
//                 continue;
//             cout << S[j];
//         }
//     }

//     return 0;
// }

/*This is 5 number problem*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;
//     for (int a = 0; a < T; a++)
//     {
//         int N, S;

//         cin >> N >> S;
//         int A[N];
//         int flage = 1;
//         for (int j = 0; j < N; j++)
//         {
//             cin >> A[j];
//         }

//         for (int j = 0; j < N; j++)
//         {
//             for (int i = j + 1; i < N; i++)
//             {
//                 for (int k = i + 1; k < N; k++)
//                 {
//                     if (A[j] + A[i] + A[k] == S)
//                     {
//                         flage = 0;
//                     }
//                 }
//             }
//         }

//         if (flage == 0)
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }

//         if (a < T - 1)
//         {
//             cout << endl;
//         }
//     }
//     return 0;
// }

/*4 number problem*/
// #include <bits/stdc++.h>
// using namespace std;
// class Student_Inf
// {
// public:
//     int I;
//     char N[101];
//     char S;
//     int T_M;
// };

// int main()
// {

//     int T;
//     cin >> T;
//     for (int i = 0; i < T; i++)
//     {
//       int Max_mark = -1;
//          Student_Inf topper;
//         for (int j = 0; j < 3; j++)
//         {
        
//             Student_Inf tem_stu;
//             cin >> tem_stu.I >> tem_stu.N >> tem_stu.S >> tem_stu.T_M;
//             if (Max_mark < tem_stu.T_M)
//             {
//                 topper = tem_stu;
//                 Max_mark = tem_stu.T_M;
//             }
//             else if (Max_mark == tem_stu.T_M)
//             {
//                 if (topper.I > tem_stu.I)
//                 {
//                     topper = tem_stu;
//                 }
//             }
//         }

//         cout << topper.I << " " << topper.N << " " << topper.S << " " << topper.T_M;
//         if (i < T - 1)
//             cout << endl;
//     }

//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// main()
// {
//     char ch;
//     cin>>ch;
//  cout<<(int)ch;
   
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// double n;
// cin>>n;
// cout<<fixed<< setprecision(6)<<n;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     (n % 2 == 0) ? cout << "Even" : cout << "Odd";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     int demo = min({a, b, c, d});
//     int demo2 = max({a, b, c, d});
//     cout << "This is min number: " << demo << endl
//          << "This is max number: " << demo2;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a,b,c;
// cin>>a>>b;
// swap(a,b);
// cout<<a<<b;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int x;
// char ch[101];
// cin>>x;
// cin.ignore();
// cin.getline(ch,101);
// cout<<x<<endl<<ch;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N, M;
//     while (cin >> N >> M)
//     {
//         if (N > 0 && M > 0)
//         {
//             int demo = max(N, M);
//             int demo1 = min(N, M);
//             int sum = 0;
//             for (int j = demo1; j <= demo; j++)
//             {
//                 sum += j;
//                 cout << j << " ";
//             }
//             cout << "sum" << " " << "=" << " ";
//             cout << sum;
//             cout << endl;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// void fun(int A,int i)
// {
//   if(i == 0) return ;
  

// }

// int main()
// {
// // int A,B;
// // cin>>A>>B;
// // for(int j=A; j<B; j++)
// // {

// // }
// int A;
// cin>>A;
// fun(A,0);
 
     
  

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s="Hello world!",copys;
// cout<<"main string size: "s.size()<<endl;
// copys=s;
// s="Jahid!";
// cout<<s.size()<<endl;
// copys.clear();
// cout<<s<<endl<<s.max_size()<<endl<<copys;
// if(copys.empty()==true)
// {
//   cout<<"Empty";
// }
// else
// {
//   cout<<"Not Empty";
// }

// s.resize(15,'?');
// cout<<endl<<s;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s;
// cin>>s;

// cout<<s.front()<<s[1];
// cout<<s.at(2)<<s.back();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s="How are ",s2="you ";
// s +=s2;
// /* s.push_back('J');*/ s +='J';
// cout<<s;
// int a=1,b=2;
// a +=b;
// cout<<endl<<a;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// string s="Hello",s2="Hi";
// s.assign(s2);
// cout<<s;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// string s="Jahid_for";
// s.erase(5,1);
// cout<<s;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// string s="Hello  Bangladesh!";
// s.replace(6,11,"World");
// cout<<s;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int x;
// cin>>x;
// string s;
// cin.ignore();
// getline(cin,s);
// cout<<x<<endl;
// cout<<s;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

// string s;
// getline(cin,s);
// cout<<s<<endl;
// stringstream s1(s);
// string demo;
// // s1 >> demo;
// // cout<<demo<<endl;
// // s1 >> demo;
// // cout<<demo<<endl;
// // s1>>demo;
// // s1>>demo;
// // s1>>demo;
// // cout<<demo<<endl;
// // cout<<"again"<<endl;
// int sum=0;
// while(s1 >> demo)
// {
//     cout<<demo<<endl;
//   sum++;
// }
// cout<<sum;

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
//         bool good = true;

//         for (int i = 0; i < s.size() - 1; i++)
//         {
//             if (s[i] == s[i + 1])
//             {
//                 good = false;
//                 break;
//             }
//         }

//         if (good == true)
//         {
//             cout << "Good";
//         }
//         else
//         {
//             cout << "Bad";
//         }
//         for (int j = 0; j < t; j++)
//         {
//             cout << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     cin.ignore();
//     string s;
//     for (int j = 0; j <= n; j++)
//     {

//         getline(cin, s);
//         if (s.size() >= 10)
//         {
//             cout << s[0] << s.size() - 2 << s[s.size() - 1];
//         }
//         else
//         {
//             cout << s;
//         }
//         if (j < n - 1)
//         {
//             cout << endl;
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// // string s("Hello world");
// // string s("Hello world",10);
// string s="Hello world";
// // string t(s,6);
// string t(7,'A');
// cout<<t;
// // cout<<s;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// string s;
// cin>>s;
// sort(s.begin(),s.end());
// cout<<s;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

// string s;
// cin>>s;
// // for(int j=0; j<s.size(); j++)
// // {
// //     cout<<s[j]<<" ";
// // }

// for(char ch: s)
// {
//     cout<<ch<<" ";
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int n;
// cin>>n;
// int arr[n];
// for(int j=0; j<n; j++)
// {
//     cin>>arr[j];
// }
// reverse(arr,arr+n);
// for(int j=0; j<n; j++)
// {
//     cout<<arr[j]<<" ";
// }

// string s;
// cin>>s;
// reverse(s.begin(),s.end());

//     cout<<s<<" ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//   string name;
//   int roll;
//   student(string n,int r)
//   {
//     name=n;
//     roll=r;
//   }
//   void place1()
//   {
//     cout<<" Dinajpur";
//   }
// };
// int main()
// {
// student s1("Jahid",7);
// cout<<s1.name<<". I am from ";s1.place1();

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;
//     string a;
//     cin >> a;

//     int fre[26] = {0};
//     for(char c:a){
//         fre[c-'a']++;
//     }

//     for(int i=0; i<26; i++){
//         for(int j=0; j<fre[i]; j++){
//             cout << char(i+'a');
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
 
// int main(){
 
//     int n;
//     scanf("%d", &n);
 
//     char a[n];
//     scanf("%s", a);

//     int len = strlen(a);
//     int pos = 1;
 
//     for(int i=0; i<len; i++){
//         for(int j=pos; j<len; j++){
//             if(a[i] > a[j]){
//                 char temp;
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//         pos++;
//     }
//     a[len] = '\0';
 
//     printf("%s", a);
 
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin >> T;
//     string s;
//     for (int j = 0; j < T; j++)
//     {
//         cin >> s;

//         if (s.size() > 10)
//         {
//             cout << s[0] << s.size() - 2 << s[s.size() - 1];
//         }
//         else
//         {
//             cout << s;
//         }
//         if (j != T - 1)
//             cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     getline(cin, s);
//     stringstream s1(s);
//     string word;
//     s1 >> word;
//     reverse(word.begin(), word.end());
//     cout << word;
//     while (s1 >> word)
//     {
//         reverse(word.begin(), word.end());
//         cout << " " << word;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class cricketer
// {
// public:
// string country;
// int jurcey;

// cricketer(string C,int J)
// {
//     country=C;
//     jurcey=J;
// }
// };
// int main()
// {

// cricketer* dhone =new  cricketer("India",19);
// cricketer* kohile = new cricketer("India",23);
// // kohile=dhone;
// // kohile->country=dhone->country;
// // kohile->jurcey=dhone->jurcey;
// *kohile=*dhone;
// delete dhone;
// cout<<kohile->country<<" "<<kohile->jurcey;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s="Hello World";
// stringstream s1(s);
// string word;
// s1>>word;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;
//     string s2;
//     s2 = s;
//     stringstream s3(s2);
//     string word;
//     s3 >> word;
//     reverse(word.begin(), word.end());
//     if (word == s)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     return 0;
// }


// #include <iostream>
// // #include <cctype>
// using namespace std;

// int main() {
//     string s;
//    cin>>s;
//     for (int i = 0; i < s.size(); i++) {
//         s[i] = tolower(s[i]);
//     }

//     cout << s;  // output: hello world
// }

// #include <bits/stdc++.h>
// #include <string.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     for (int j = 0; j < t; j++)
//     {

//         string s;
//         cin >> s;
//         int sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
//         int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
//         if (sum == sum2)
//         {
//             cout << "YES";
//         }
//         else
//         {
//             cout << "NO";
//         }
//         if (j < t - 1)
//         {
//             cout << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;
//     int E_1 = 0, G_1 = 0, Y_1 = 0, P_1 = 0, T_1 = 0;
//     for (int j = 0; j < s.size(); j++)
//     {
//         s[j] = tolower(s[j]);
//         if (s[j] == 'e')
//         {
//             E_1++;
//         }
//         if (s[j] == 'g')
//         {
//             G_1++;
//         }
//         if (s[j] == 'y')
//         {
//             Y_1++;
//         }
//         if (s[j] == 'p')
//         {
//             P_1++;
//         }
//         if (s[j] == 't')
//         {
//             T_1++;
//         }
//     }
//     cout << min({E_1, G_1, Y_1, P_1, T_1});

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s;
// getline(cin,s);
// stringstream ss(s);
// string word;
// reverse(word.begin(),word.end());
// ss>>word;
// cout<<word;
// while(ss>>word)
// {
//     reverse(word.begin(),word.end());
//     cout<<" "<<word;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// string s;
// getline(cin,s);

// s.replace("",6,"-");
// cout<<s;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string word;
//     int cnt=0;
//     int i=0;
//     while(ss>>word){
//         if(word[i]=='.'){
//             i++;
//             continue;
//         }
//         cnt++;
//     }
//     cout<<cnt;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     stringstream ss(s);
//     string word;
//     int cnt = 0;

//     while (ss >> word)
//     {
//         if (word[0] == '.') // skip words starting with dot
//             continue;
//         cnt++;
//     }

//     cout << cnt;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;
//     int size1 = s.size();
//     for (int j = 0; j < size1; j++)
//     {
//         if (s[j] == 'E' && s[j + 1] == 'G' && s[j + 2] == 'Y' && s[j + 3] == 'P' && s[j + 4] == 'T')
//         {
//             cout << " ";
//             j += 4;
//         }

//         else
//         {
//             cout << s[j];
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public: 
//   string Name;
//   int roll;
//   int mark;
//   char group;
// };
// int main()
// {

//     int n;
//     cin>>n;
//     student a[n];
//     for(int j=0; j<n; j++)
//     {
//         cin>>a[j].Name >>a[j].roll >>a[j].mark >>a[j].group;
//     }

//     for(int j=0; j<n; j++)
//     {
//         cout<<a[j].Name <<" "<<a[j].roll <<" "<<a[j].mark <<" "<<a[j].group;
//         if(j<n-1)
//         {
//             cout<<endl;
//         }
//     }

//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public: 
//   string Name;
//   int roll;
//   int mark;
//   char group;
// };
// int main()
// {

//     int n;
//     cin>>n;
//     student a[n];
//     for(int j=0; j<n; j++)
//     {  
//            cin.ignore();
//         getline(cin,a[j].Name);
//         cin>>a[j].roll >>a[j].mark >>a[j].group;
     
//     }

//     for(int j=0; j<n; j++)
//     {
//         cout<<a[j].Name <<" "<<a[j].roll <<" "<<a[j].mark <<" "<<a[j].group;
//         if(j<n-1)
//         {
//             cout<<endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//   string Name;
//   int roll;
//   int mark;
//   char group;
// };
// int main()
// {

//     int n;
//     cin>>n;
//     student a[n];
//     for(int j=0; j<n; j++)
//     {

//         cin>>a[j].Name>>a[j].roll >>a[j].mark >>a[j].group;

//     }
//    student mn;
//    mn.mark=INT_MAX;
//     for(int j=0; j<n; j++)
//     {
//       if(a[j].mark < mn.mark)
//       {
//         mn=a[j];
//       }
//     }
//  cout<<mn.Name<<" "<<mn.roll<<" "<<mn.mark<<" "<<mn.group;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public: 
//   string Name;
//   int roll;
//   int mark;
//   char group;
// };

// bool cmp(student l,student r)
// {

//    return (l.mark == r.mark) ?  l.roll < r.roll : l.mark < r.mark;

   
//     // if (l.mark == r.mark)
//     // {
//     //     return l.roll < r.roll;
//     // }
//     // else
//     // {
//     //     return l.mark < r.mark;
//     // }
// }
// int main()
// {

//     int n;
//     cin>>n;
//     student a[n];
//     for(int j=0; j<n; j++)
//     {  
       
//         cin>>a[j].Name>>a[j].roll >>a[j].mark >>a[j].group;
     
//     }
//    sort(a,a+n,cmp);
//     for(int j=0; j<n; j++)
//     {
//         cout<<a[j].Name<<" "<<a[j].roll<<" " <<a[j].mark<<" " <<a[j].group;
//       if(j<n-1)
//       {
//           cout<<endl;
//       }
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
// int roll;

// };
// int main()
// {

//  student a[5];
//  for(int j=0; j<5; j++)
//  {
//     cin>>a[j].roll;
//  }
//  cout<<a[2].roll;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };
// bool cmp(student l, student r)
// {
//     return (l.marks == r.marks) ? l.roll > r.roll : l.marks < r.marks;
// }
// int main()
// {
//     int N;
//     cin >> N;
//     student a[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> a[j].name >> a[j].roll >> a[j].marks;
//     }

//     sort(a, a + N, cmp);
//     for (int j = 0; j < N; j++)
//     {
//         cout << a[j].name << " " << a[j].roll << " " << a[j].marks;
//         if (j < N - 1)
//         {
//             cout << endl;
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
// cin >> N;

// string s;
// s.reserve(N);   // prevent reallocation

// char c;
// for (int i = 0; i < N; i++) {
//     cin >> c;   // reads one character
//     s.push_back(c);
// }

// sort(s.begin(), s.end());
// cout << s;

// // int N;
// // cin>>N;
// // string s;
// // cin>>s;
// // sort(s.begin(),s.end());
// // cout<<s;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;
//     int size1 = s.size(), sum = 0;
//     for (int j = 0; j < size1; j++)
//     {
//         sum += s[j] - '0';
//     }
//     cout << sum;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s;
// cin>>s;
// int fre[26]={0};
// int size1=s.size();
// for(char c : s)
// {
//     fre[c-'a']++;
// }
// for(char i='a'; i<='z'; i++)
// {
// for(int j=1; j<=fre[i-'a']; j++)
// {
//    cout<<i<<'='<<j<<endl;
// //    if(j<size1-1)
// //    {
// //     cout<<endl;
// //    }
// }
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;
//     int fre[26] = {0};
//     int size1 = s.size(), distinct = 0, printed = 0;
//     for (char c : s)
//     {
//         fre[c - 'a']++;
//         distinct++;
//     }

//     for (int i = 'a'; i <= 'z'; i++)
//     {
//         if (fre[i - 'a'] > 0)
//         {
//             printed++;
//             cout << (char)i << ":" << fre[i - 'a'];
//             if (printed < distinct)
//             {
//                 cout << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());
//     cout << s;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int t;
// cin>>t;
// while(t--)
// {
//     string s;
//     cin>>s;
//     int len=s.size(),count1=0,count2=0;
//     for(int i=0;s[i]=len/2;i++)
//     {
//         count1=s[i];
//         count1++;
//     }
//     cout<<count1<<endl;
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <string.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     for (int j = 0; j < t; j++)
//     {
//         string s;
//         cin >> s;
//         int sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
//         int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
//         (sum == sum2) ? cout << "YES" : cout << "NO";
//         if (j < t - 1)
//         {
//             cout << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     int arr[N];
//     long long int sum = 0;
//     for (int j = 0; j < N; j++)
//     {
//         cin >> arr[j];
//     }
//     for (int j = 0; j < N; j++)
//     {
//         sum += arr[j];
//     }
//     (sum < 0) ? cout << sum * (-1) : cout << sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;
//     int arr[N];

//     cin >> arr[N];
//     long long int sum = 0;
//     while (arr[N] > 0)
//     {
//         sum += arr[N] % 10;
//         arr[N] /= 10;
//     }
//     cout << sum;

//     return 0;
// }


// i=0 -> max(s1,s2)
//   if(i<len(s1)) print ->s1
//    if(i<len(s2)) print ->s2

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     for (int j = 0; j < N; j++)
//     {

//         string s, t;
//         cin >> s >> t;
//         for (int j = 0; j < max(s.size(), t.size()); j++)
//         {
//             if (j < s.size())
//                 cout << s[j];
//             if (j < t.size())
//                 cout << t[j];
//         }
//         if (j < N - 1)
//         {
//             cout << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int N;
//         char C;
//         cin >> N >> C;
//         for (int j = 0; j < N; j++)
//         {
//             cout << C;
//             if (j < N - 1)
//                 cout << " ";
//         }

//         if (N < t)
//             cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };
// bool cmp(student l, student r)
// {
  
//     return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
// }
// int main()
// {
//     int N;
//     cin >> N;
//     student arr[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> arr[j].name >> arr[j].roll >> arr[j].marks;
//     }
//     sort(arr, arr + N, cmp);
//     for (int j = 0; j < N; j++)
//     {
//         cout << arr[j].name << " " << arr[j].roll << " " << arr[j].marks;
//         if (j < N - 1)
//             cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     int marks;
// };
// int main()
// {
// int N;
// cin>>N;
// student arr[N];
// for(int j=0; j<N; j++)
// {
//     cin>>arr[j].name>>arr[j].roll>>arr[j].marks;

// }
//  reverse(arr,arr+N);
//  for(int j=0; j<N; j++)
//  {
//     cout<<arr[j].name<<" "<<arr[j].roll<<" "<<arr[j].marks;
//     if(j<N-1) cout<<endl;
//  }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// string s,x,word;
// getline(cin,s);
// cin>>x;
// stringstream s1(s);
// int count=0;
// while(s1 >> word)
// {
//     if(word == x)
//      {
//         count++;
//      }
// }
// cout<<count;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string x, y, xx, yy;
//     cin >> x >> y;
//     xx = x;
//     yy = y;
//     sort(x.begin(), x.end());
//     sort(y.begin(), y.end());
//     cout << x.size() << " " << y.size() << endl;
//     cout << x + y;
//     char ch=xx[0];
//     replace(xx.begin(), xx.end(), xx[0], yy[0]);
//     replace(yy.begin(), yy.end(), yy[0], ch);
//     cout << endl
//          << xx << " " << yy;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int t;
// cin>>t;
// for(int k=0; k<t; k++)
// {


//     int N;
//     cin >> N;
//     int arr[N];
//     int sum4 = 0 , sum = 0, sum1 = 0;
//     for (int j = 0; j < N; j++)
//     {
//         cin >> arr[j];
//     }



//         if (N % 2 == 0)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             (arr[j] % 2 == 0) ? sum++ : sum1++;
//         }
//         if (sum == sum1)
//         {
//             cout << "0";
//         }
//         else
//         {
//         //    ((sum1+sum)/2 == N/2)? cout<<(sum1-sum)/2 : cout<<N/2;
//           int demo=sum1-sum;
//           demo =(demo < 0) ? demo*(-1) : demo;
//             cout<<demo/2;
//         }
//     }
//     else
//     {
//         cout << "-1";
//     }
//     if(k<t-1) cout<<endl;
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int k = 0; k < t; k++)
//     {

//         int N;
//         cin >> N;
//         int arr[N];
//         int sum4 = 0, even = 0, odd = 0;
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr[j];
//         }

//         // if (N % 2 != 0)  cout << "-1";
//         // else
//         // {
//         //     for (int x : arr)
//         //     {
//         //         if(x%2==0)even++;
//         //     }
//         //     odd= N-even;
//         //     if (even == odd) cout << "0";
//         //     else
//         //     {
//         //         cout << abs(odd - even) / 2;
//         //     }
//         // }

//         cout << (N % 2 ? -1 : abs(N - 2 * count_if(arr, arr + N, [](int x){ return x % 2 == 0; })) / 2);

//         if (k < t - 1) cout << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int k = 0; k < t; k++)
//     {
//         int N;
//         cin >> N;
//         int arr[N];
//         int sum4 = 0, even = 0, odd = 0;
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr[j];
//         }
//         cout << (N % 2 ? -1 : abs(N - 2 * count_if(arr, arr + N, [](int x){ return x % 2 == 0; })) / 2);

//         if (k < t - 1) cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int j = 0; j < t; j++)
//     {

//         int n;
//         cin >> n;
//         cin.ignore();
//         string s, word, word2;
//         getline(cin, s);
//         stringstream s1(s);
//         s1 >> word;
//         word2 = word;
//         s1 >> word;
//         sort(word.begin(), word.end());
//         sort(word2.begin(), word2.end());
//         (word == word2) ? cout << "YES" : cout << "NO";
//         if (j < t - 1)
//             cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int x=0; x<n; x++)
// {
//     cin>>arr[x];
// }

// for(int i=0; i<n; i++)
// {
//     if(arr[i] == 8)
//     {
//         cout<<i; 
//         break;
//     }
// }
//   return 0; 
// }


/*Date: 12/01/2025*/
/*1st problem*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string S,X,word;
// cin>>S>>X;
// int len2=X.size();
// int idx=S.find(X);
// while(idx != string::npos)
// {
//     S.replace(idx,len2,"#");
//     idx= S.find(X,idx+1);
// }
// cout<<S;
// return 0;
// }
// for(int j=0; j<=S.size()-len2; )
// {
//     // if(S[j]== 'g' && S[j+1]=='o' && S[j+2]=='o' && S[j+3]=='d')
//     // {
//     //     // cout<<j;
//     //     // x=j;
//     //   S.replace(j,len2,"#");
//     // }
//     int i=0;
//    for( ; i<len2; i++)
//    {

//     if(S[j+i] != X[i]) break;
//  if(i == len2)
//     {
//         // cout<<j;
//         // x=j;
//       S.replace(j,len2,"#");
   
//       j += 1;
//     }
//     else 
//         j++;
// }
// }
// cout<<S;


//     return 0;
// }

/*2nd problem*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s,word;
// getline(cin,s);
// stringstream s1(s);
// string ch1="Jessica";
// int flage=1;
// while(s1>>word)
// {
//     if(word == ch1)
//     {
//         flage=0;
//     }
// }
// if(flage == 0)
// {
//     cout<<"YES";
// }
// else
// {
//     cout<<"NO";
// }
//     return 0;
// }

/*problem 3d*/
// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string nm;
//     int cls;
//     char s;
//     int id;
   
// };
// int main()
// {
// int N;
// cin>>N;
// student arr[N];
// for(int j=0; j<N; j++)
// {
//     cin>>arr[j].nm>>arr[j].cls>>arr[j].s>>arr[j].id;

// }

// int start=0,end=N-1;
// while(start < end)
// {
//     swap(arr[start].s,arr[end].s);
//     start++;
//     end--;
// }
// for(int i=0; i<N; i++)
// {
//     cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s <<" "<<arr[i].id;
//     if(i<N-1) cout<<endl;
// }

//     return 0;
// }



/*4th problem */
// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
   
// };
// bool cmp(student l,student r)
// {
// //    if(l.math_marks+l.eng_marks > r.math_marks+r.eng_marks)
// //    {
// //     return true;
// //    }
// //    else if(l.math_marks+l.eng_marks < r.math_marks+r.eng_marks)
// //    {
// //     return false;
// //    }
// // else
// // {
// //     return (l.id < r.id) ? true : true; 
// // }

// /*for me*/
//   return (l.math_marks+l.eng_marks == r.math_marks+r.eng_marks) ? (l.id < r.id) ? true : false : (l.math_marks+l.eng_marks > r.math_marks+r.eng_marks) ? true : false;
// }

// int main()
// {
// int N;
// cin>>N;
// student arr[N];
// for(int j=0; j<N; j++)
// {
//     cin>>arr[j].nm>>arr[j].cls>>arr[j].s>>arr[j].id>>arr[j].math_marks>>arr[j].eng_marks;

// }

// sort(arr,arr+N,cmp);
// for(int i=0; i<N; i++)
// {
//     cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "
//     <<arr[i].eng_marks;
//     if(i<N-1) cout<<endl;
// }

//     return 0;
// }


/*5th problem*/
// #include <bits/stdc++.h>
// using namespace std;
// class student
// {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
// };
// bool cmp(student l, student r)
// {

//        if(l.eng_marks > r.eng_marks)
//    {
//     return true;
//    }
//    else if(l.eng_marks < r.eng_marks)
//    {
//     return false;
//    }
// else
// {
// // (l.eng_marks > r.eng_marks) ? true : false ;
//     // if(l.math_marks == r.math_marks)
//     // {
//     //    return (l.id < r.id) ? true : false; 
//     // }
//     // else
//     // {
//     // return (l.math_marks > r.math_marks) ? true : false;
//     // }
   
//  /*for me*/
//  return  (l.math_marks == r.math_marks) ? (l.id < r.id) ? true : false : (l.math_marks > r.math_marks) ? true : false;
// }
//     // return (l.math_marks + l.eng_marks == r.math_marks + r.eng_marks) ? (l.id < r.id) ? true : false : (l.math_marks + l.eng_marks > r.math_marks + r.eng_marks) ? true
//     //                                                                                                                                                              : false;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     student arr[N];
//     for (int j = 0; j < N; j++)
//     {
//         cin >> arr[j].nm >> arr[j].cls >> arr[j].s >> arr[j].id >> arr[j].math_marks >> arr[j].eng_marks;
//     }

//     sort(arr, arr + N, cmp);
//     for (int i = 0; i < N; i++)
//     {
//         cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " "
//              << arr[i].eng_marks;
//         if (i < N - 1)
//             cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int max_1(int a,int b,int c,int d)
// {
//     return max({a,b,c,d});
// }
// int main()
// {
// int a,b,c,d;
// cin>>a>>b>>c>>d;
// cout<<max_1(a,b,c,d);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s,word;
// cin>>s;
// int len=s.size();
// // stringstream s1(s);

// // s1>>word;
// // cout<<word;

// for(int j=0; j<len; j++)
// {
//    if(s[j] == ',')
//    {
   
//     // s.reverse(,j,"\n");
//     cout<<endl;
//    }
//    cout<<s[j];
// }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// class Student 
// {
// public:
// // int a;
// // int b;
// // int c;
// // int d;
// // int e;
// int  input(int a,int b,int c)
// {
//     // cin>>a>>b>>c>>d>>e;
//     return a + b +c;
// }
// };
// int main()
// {
// Student s1;
// cout<<s1.input(30,40,50);

//     return 0;
// }


/*Date: 12/03/2025*/
/*General esy problem A*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s,s2,word;
// cin>>s;
// s2=s;
// reverse(s2.begin(),s2.end());
// int sum=0;  
// if(s2 == s)
// {
//     cout<<s2;
// }
// else 
// {
//     // for(int j=0; j<)
//     replace(s.begin(),s.end(),'?',' ');
//   word=s;
//   for(int j=0; j<word.size(); j++)
//   {
//      if(word[j] == ' ')
//   {
//    sum++;
//   }
//   }
 
// }

// for(int i=0; i<sum; i++)
// {
//   replace(word.begin(),word.end(),' ',);
  
// cout<<word;
// }


//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string s ;

// while(getline(cin,s))
// {
// // cin.ignore();
// cout<<s;
//  cout<<endl;


// }


//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int j=0; j<n; j++)
// {
//     cin>>arr[j];
// }

// for(int i=0; i<n-1; i++)
// {
//     for(int j=i+1; j<n; j++)
//     {
//         if(arr[i] == arr[j])
//         {
//             cout<<arr[i];
//         }
//     }
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int j=0; j<n; j++)
// {
//     cin>>arr[j];
// }

// int temp[n];
// for(int i=0; i<n; i++)
// {
//     if(temp[arr[i]] == 1)
//     {
//         cout<<arr[i];
//     }
//     temp[arr[i]]=1;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int n;
// cin>>n;
// int arr[n];
// for(int j=0; j<n; j++)
// {
//     cin>>arr[j];
// }
// int sum=0;
// for(int i=0; i<n; i++)
// {
//  sum +=arr[i];
// }
// cout<<sum;
//     return 0;
// }

// Ce^2f`o*~H)+=-x|


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int a,b;
// cin>>a>>b;
// int arr[a],brr[b];
// for(int j=0; j<a; j++)
// {
//     cin>>arr[j];
// }

// for(int i=0; i<b; i++)
// {
//     cin>>brr[i];
// }

// for(int j=0; j<a-1; j++)
// {
//     for(int i=j+1; i<a; i++)
//     {
//        if(arr[j]+arr[i] == brr[j])
//        {
//         cout<<arr[j]<<" "<<arr[i];
//        }
//     }
// }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// void weight(int a,int b)
// {
//     int ara,brb,ii=0,jj=0;
//     for(int i=a; i<10; i++)
//     {
        
//     }

//     // for(int j=b; j<10; j++)
//     // {
//     //   brb= j*2;
//     //   jj=j;
//     // }
// // if(ara > brb)
// // {
// //     cout<<ii-a;
// // }
// }
// int main()
// {

// int a,b;
// cin>>a>>b;

// weight(a,b);

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int t;
// cin>>t;
// for(int j=0; j<t; j++)
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//    int sum=0; 
// for(int k=0; k<n; k++)
// {
//     for(int s=k+1; s<n; s++)
//     {
//         // if(arr[k] > arr[s])
//         // {
//           cout<<arr[k]<<","<<arr[s]<<endl;
//         // }
//     }

// }
// cout<<endl;
//     // if(j<t-1) cout<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {


// int t;
// cin>>t;
// for(int j=0; j<t; j++)
// {
//     int n;
//     cin>>n;
// if(n%3==1)
// {
//     cout<<"First";
// }
// else if(n%3==2)
// {
//     cout<<"First";
// }
// else
// {
//     cout<<"Second";
// }
// if(j<t-1)cout<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int A,B,X,Y;
// cin>>A>>X>>B>>Y;

// if(((A*2)+X) == ((B*2)+Y))
// {
//     cout<<"Equal";
// }
// else if(((A*2)+X) > ((B*2)+Y))
// {
//     cout<<"Messi";
// }
// else if(((A*2)+X) < ((B*2)+Y))
// {
//     cout<<"Ronaldo";
// }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int X,Y;
// cin>>X>>Y;
// if((X*Y) >=100)
// {
//     cout<<"Yes";
// }
// else 
// {
//     cout<<"No";
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int N;
// cin>>N;
// cout<<N*2;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// string x;
// cin>>x;
// cout<<"k"<<x[2]<<x[3];
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int A,B;
// cin>>A>>B;
// cout<<A+B<<"1";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int X;
// cin>>X;
// (X == 404)? cout<<"NOT FOUND" :    cout<<"FOUND";

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int X,Y,K;
// cin>>X>>Y>>K;
// ((X-Y) == K) ? cout<<"Yes" : cout<<"No";
//     return 0;
// }

/*Problem I*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {
//     int W ,P,K;
//     cin>>W>>P>>K;
//       int demo=K-W;
//       int demo1=W+P;
//      int demo2= (demo < 0) ? demo*(-1): demo;
//   if(K>demo1)
//   {
//   cout<<(W*2)+(P*1);
  
//   }
//   else if(W>K)
//   {
//     cout<<demo2*2;
//   }
//   else 

//   {
//        cout<<(W*2)+(demo2*1);
//   }
//     if(j<T-1)cout<<endl;
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int N;
// cin>>N;
// int sum1= N*2000;
// cout<<sum1/500;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {
//     int W,P,K;
//     cin>>W>>P>>K;
//     int t=min(W,K);
//     int sum=K-t;
//     int at1=min(P,sum);
//     int ans=t*2+at1;
//     cout<<ans<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {
//     int N;
//     cin>>N;
//     string s;
//     cin>>s;
//     for(int i=0; i<N; i++)
//     {
//         if(s[i]==0)
//         {
//             cout<<N;
//         }
//         else if(s[i]==1)
//         {
//             cout<<"0";
//         }
//         else if(s[0]==1)
//         {
//             cout<<"0";
//         }
//         else 
//         {
//             cout<<"1";
//         }
//     }
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {
//     int N;
//     cin>>N;
//     string s;
// cin>>s;

// for(int i=0; i<N-1; i++)
// {
//     if(s[i] =='1' && s[i+1] =='0')
//     {
//         s[i+1]='1';
//     }
// }

// int sum=0; 
// for(char C : s)
// {
//    if(C == '0') sum++;
// }
// cout<<sum<<endl;
// }
// return 0;
  
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {
// int N;
// cin>>N;
// if(N%4!=1)
// {
//    for(int j=N; j<=N+3;j++)
//    {
//     if(j%4==0)  cout<<j/4;
//    }
// }
// else 
// {
//     for(int j=N; j<=N+3; j++)
//     {
//         if(j%4==0)  cout<<j/4; 
//     }
// }
// if(j<T-1) cout<<endl;
// }


//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//  int T;
//  cin>>T;
//  for(int j=0; j<T; j++)
//  {
// int N;
// cin>>N;
// int arr[N];
// for(int i=0; i<N; i++)
// {
//     cin>>arr[i];
// }
// int sum=0;
// for(int k=0; k<N; k++)
// {
//     sum +=arr[k];
// }
// int ano_sum=sum+1;
// (sum%2==0) ? cout<<sum/2 : cout<<ano_sum/2;
// if(j<T-1) cout<<endl;
//  }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int T;
//     cin>>T;
//     for(int j=0; j<T; j++)
//     { 
// char A,B,C,D,E,F;
// cin>>A>>B>>C>>D>>E>>F;
// char ch='W';
// if(A==ch && B==ch && C==ch || B==ch && C==ch && D==ch || C==ch && D==ch && E==ch || D==ch && E==ch && F==ch)
//     {
//         cout<<"Yes";
//     }
//     else 
//     {
//         cout<<"No";
//     }
//     if(j<T-1) cout<<endl;
// }
// return 0;

// }

/*problem name : GMGM*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {



// int N,D;
// cin>>N>>D;
// int arr[N];
// for(int i=0; i<N; i++)
// {
//     cin>>arr[i];
// }
// int sum=0;
// // for(int k=0; k<N; k++)
// // {
// //     if(arr[k]>D)
// //     {
// //        sum++;
// //     }
// // }

//   int flage=1;
// for(int k=0; k<N;  k++)
// {
//     if(arr[k]<D)
//     {
//         for(int l=0; l<N; l++)
//         {
//             if(arr[k]<D)
//             {
                
//                 break;
//             }
//         }
//     }
//     else 
//     {
      
//         for(int a=0; a<N; a++)
//         {
//             if(arr[a]>D)
//             {
//                 flage=0;
//                 break;
//             }
//         }
//        if(flage==0) sum++;
//     }
     
// }

        
// cout<<sum;
// if(j<T-1) cout<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T; 
// cin>>T;
// for(int j=0; j<T; j++)
// {
//     int sum=0;
//     int N,D;
//     cin>>N>>D;
//     int arr[N];
//     for(int k=0; k<N; k++)
//     {
//         cin>>arr[k];
//     }
//     for(int l=0; l<N; l++)
//     {
//         for(int a=0; a<arr[l]<=D; a++)
//         {
//             if(arr[a]>D)
//             {
//                 break;
//             }
//             else 
//             {
//                 sum +=0;
//             }
//         }
//     }

//     cout<<sum;
//     if(j<T-1) cout<<endl;
// }
//     return 0;
// }


/*problem name: ADVITIYA3*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// for(int j=0; j<T; j++)
// {
//     int N,K;
//     cin>>N>>K;
//     int arr[N];
//     for(int i=0; i<N; i++)
//     {
//         cin>>arr[i];
//     }
//     int brr[N]={0};
//     for(int k=0; k<N; k++)
//     {   if(arr[k]>=K)
//         {
//           brr[k]=arr[k]%K;
//         }
//      else if(arr[k] < K)
//      {
//         brr[k]=-1;
//      }
//         // else 
//         // {
//         //     brr[k]=-0;
//         // }
//     }

//     for(int x=0; x<N; x++)
//     {   

//         // cout<<brr[x]<<" ";
        
//         if(brr[x]>0)
//         {
//            cout<< min(brr,brr+N);
//         }
//     }
//    if(j<T-1) cout<<endl;
// }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// void Room()
// {
// int T;
// cin>>T;
// for(int j=0;j<T; j++) 
// {
//     int N;
//     cin>>N;
//     int ar[N];
//     for(int k=0; k<N; k++) cin>>ar[k];
//     int sum=0; 
//     for(int l=0; l<N; l++) 
//     {
//         sum +=(ar[l]+1)/2;
//     }
//     cout<<sum;
//     if(j<T-1)cout<<endl;

// }
// }
// int main()
// {
// Room();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {


// int N;
// while(true)
// {
//     cout<<"Enter the number: ";
// if(!(cin>>N))
// {
//     cout<<"Invalid input!\n";
//     cin.clear();
//     cin.ignore(1000,'\n');
//     int exit1;
//     cout<<"If you  click- 1  then program exit: ";
//     cin>>exit1;
//    if(exit1==1)
//    {
//     break;
//    }
//    else 
//    {
//       continue;
//    }
// }

// (N==49)? cout<<"Hot\n" : cout<<"Cool\n";
// }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N,sum,sum2;
// while(true)
// {
//     int ch=00;
//     cout<<"*Welcome!\n";
//     cout<<endl;
//     cout<<"Choose one operation: "<<endl;
//     cout<<"1.sumatation."<<endl;
//     cout<<"2.subtraction."<<" "<<"(working...)"<<endl;
//     cout<<"3.multiplication."<<" "<<"(working...)"<<endl;
//     cout<<"4.division"<<" " <<"(working...)" <<endl;
//     cout<<"*0.exit"<<" "<<"(working...)" <<endl;
//     cout<<endl;
//     cout<<"Select the operation: ";
//     if(!(cin>>N))
//     {
//           cout<<"Invalid input!\n";
//     cin.clear();
//     cin.ignore(1000,'\n');
//     int exit1;
//     cout<<"If you  click- 1  then program exit: ";
//     cin>>exit1;
//    if(exit1==1)
//    {
//     break;
//    }
//    else 
//    {
//       continue;
//    }
//     }
//     if(N==1)
//     {
//        cout<<"Let's perform addition"<<endl;
//        cout<<"Give two numbers on two lines"<<endl;
//        cout<<"Number 1 is: ";
//        cin>>sum;
//        cout<<"Number 2 is: ";
//        cin>>sum2;
//        cout<<"This sum is: "<<sum+sum2;
//        cout<<endl;
//    }
//    else if (N==2)
//    {
//      cout<<"Let's perform subtraction"<<endl;
//        cout<<"Give two numbers on two lines"<<endl;
//        cout<<"Number 1 is: ";
//        cin>>sum;
//        cout<<"Number 2 is: ";
//        cin>>sum2;
//        cout<<"This subtraction is: "<<sum-sum2;
//        cout<<endl;
//    }

//    else if(N==3)
// {
//        cout<<"Let's perform multiplication"<<endl;
//        cout<<"Give two numbers on two lines"<<endl;
//        cout<<"Number 1 is: ";
//        cin>>sum;
//        cout<<"Number 2 is: ";
//        cin>>sum2;
//        cout<<"This multiplication is: "<<sum*sum2;
//        cout<<endl;
// }

// else if(N==4)
// {
//        cout<<"Let's perform division"<<endl;
//        cout<<"Give two numbers on two lines"<<endl;
//        cout<<"Number 1 is: ";
//        cin>>sum;
//        cout<<"Number 2 is: ";
//        cin>>sum2;
//        cout<<"This division is: "<<sum/sum2;
//        cout<<endl;
// }
// else if(N==ch)
// {
//     break;
// }
// cout<<endl;
// }

//     return 0;
// }



/*New calcluter version*/
/*New calcluter version*/
/*New calcluter version*/


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int N;
// while(true)
// {
//     int ch=00,sum=0;
//     cout<<"*Welcome!\n";
//     cout<<endl;
//     cout<<"Choose one operation: "<<endl;
//     cout<<"1.sumatation."<<"(working...) "<<endl;
//     cout<<"2.subtraction."<<" "<<"(coming soon)"<<endl;
//     cout<<"3.multiplication."<<" "<<"(coming soon)"<<endl;
//     cout<<"4.division"<<" " <<"(coming soon)" <<endl;
//     cout<<"*0.exit"<<" "<<"(coming soon)" <<endl;
//     cout<<endl;
//     cout<<"Select the operation: ";
//     if(!(cin>>N))
//     {
//           cout<<"Invalid input!\n";
//     cin.clear();
//     cin.ignore(1000,'\n');
//     int exit1;
//     cout<<"If you  click- 1  then program exit: ";
//     cin>>exit1;
//    if(exit1==1)
//    {
//     break;
//    }
//    else 
//    {
//       continue;
//    }
//     }
//     if(N==1)
//     {
//         int n;
//         cout<<"How many number you can addition: ";
//         cin>>n;
    
//         string s;
//         s.resize(n);
//        cout<<"Let's perform addition"<<endl;
//        cout<<"Give "<<n  <<" numbers on two lines"<<endl;
//     for(int j=0; j<n; j++)
//     {
//        cout<<"Number "<<j+1<<" is: ";
//        cin>>s[j];
//     }
//     for(int i=0; i<n; i++)
//     {
//         sum +=s[i]-'0';
//     }
//       cout<<"This sum is: "<<sum;
     
//        cout<<endl;
//    }
// //    else if (N==2)
// //    {
// //      cout<<"Let's perform subtraction"<<endl;
// //        cout<<"Give two numbers on two lines"<<endl;
// //        cout<<"Number 1 is: ";
// //        cin>>sum;
// //        cout<<"Number 2 is: ";
// //        cin>>sum2;
// //        cout<<"This subtraction is: "<<sum-sum2;
// //        cout<<endl;
// //    }

// //    else if(N==3)
// // {
// //        cout<<"Let's perform multiplication"<<endl;
// //        cout<<"Give two numbers on two lines"<<endl;
// //        cout<<"Number 1 is: ";
// //        cin>>sum;
// //        cout<<"Number 2 is: ";
// //        cin>>sum2;
// //        cout<<"This multiplication is: "<<sum*sum2;
// //        cout<<endl;
// // }

// // else if(N==4)
// // {
// //        cout<<"Let's perform division"<<endl;
// //        cout<<"Give two numbers on two lines"<<endl;
// //        cout<<"Number 1 is: ";
// //        cin>>sum;
// //        cout<<"Number 2 is: ";
// //        cin>>sum2;
// //        cout<<"This division is: "<<sum/sum2;
// //        cout<<endl;
// // }
// // else if(N==ch)
// // {
// //     break;
// // }
// cout<<endl;
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// // int T;
// // cin>>T;
// // while(T--)
// // {
// //     int N,N1,N2;
// //     cin>>N>>N1>>N2;
// //     int x=N,y=N1,z=N2;
// //     if(x>y) swap(x,y);
// //     if(x>z) swap(x,z);
// //     if(y>z) swap(y,z);
// //     cout<<y<<endl;
// // }

// cout<<5/2;


//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T;
// cin>>T;
// while(T--)
// {
// int N,X,Y;
// cin>>N>>X>>Y;
// int arr[N];
// for(int j=0; j<N; j++)
// {
//     cin>>arr[j];
// }
//   int sum=0;
// for(int i=0; i<N; i++)
// {
//     if(Y<(arr[i])*X)
//     {
//       sum +=Y;
//     }
//     else 
//     {
       
//         sum +=(arr[i])*X;
//     }
// }
// cout<<sum<<endl;
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
//         int N, D;
//         cin >> N >> D;
//         int arr[N];
//         for (int j = 0; j < N; j++)
//             cin >> arr[j];
        
//         int count = 0;
//         char gun = 'c';
//         for (int j = 0; j < N; j++)
//         {
//             if (arr[j] > D && gun == 'c')
//             {
//                 gun = 'l';
//                 count++;
//             }
//             else if (arr[j] <= D && gun == 'l')
//             {
//                 gun = 'c';
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//   int T;
//   cin>>T;
//   while(T--)
//   {
//       int X;
//       cin>>X;
//       if(X>100)
//       {
//           cout<<"2000";
//       }
//       else if(X> 70 && X <= 100)
//       {
//           cout<<"500";
//       }
//       else 
//       {
//           cout<<"0";
//       }
//       cout<<endl;
//   }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int H,X,Y;
// cin>>H>>X>>Y;
// int sum= H-Y;
// int sum2=sum/X;
// cout<<ceil((double)sum2);
//     return 0;
// }


// #include <bits/stdc++.h>
// #include <cstring>
// using namespace std;
// // char enc_data[]={'6','(','f','s','[','Q','9','@','r','*','Z','{','1','X','!','D','%','0','>','h','&','B','_','c',']','+','k','P','#','w','^','G','s','O','b','q','F','y','j','r','a','G','7','@','p','R','2',')','m','K','0','t','B','!','x','4','Z','h','U','9','e','W','q','5','Y','('};
// // char dec_data[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' ','{','[','}','<','>','/','?','+','-','_','=','.',',','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
// /*change some*/
// char enc_data[]={'k','W','&','m','F','9','B','[','o','3','p','(','U','x','L','@','t','G','Q','i','z','*','C','a','h','5','D','r','Y','!','0','^','n','V','s','J','e','8','O','S','f','R','y','4','A','Z','M','1','j','2','T','q','d','P','b','I','w','6','E','c','X','v','K','g','$','#','(',')','H','u','7','l','%','N','W'};
// char dec_data[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','!','@','#','$','%','^','&','*','(',')','[',' '};
// const int MAX_SIZ= sizeof(enc_data);

// int getIndex(const char* arr,char x)
// {
//     for(int i=0; i<MAX_SIZ;i++)
//     {
//         if(arr[i] == x)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// string encryption(string s)
// {
//     int ind;
//     for(int j=0; j<s.size(); j++)
//     {
//         ind =getIndex(dec_data,s[j]);
//         if(ind >= 0)
//         {
//             s[j]= enc_data[ind];
//         }

//     }
//     return s;
// }

// string decryption(string s)
// {
//     int ind;
//     for(int j=0; j<s.size(); j++)
//     {
//         ind=getIndex(enc_data,s[j]);
//         if(ind >= 0)
//         {
//             s[j]=dec_data[ind];
//         }
//     }
//     return s;
// }

// int main()
// {
// string str;
// getline(cin,str);
// // str=encryption(str);
// // cout<<str<<endl;
// string decrypted =decryption(str);
// cout<<decrypted;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int T;
//   cin>>T;
//   while(T--)
//   {
//     int X,Y;
//     cin>>X>>Y;
//     int sum=Y-X;
//     (sum<0)? cout<<"0" : cout<<sum;
//     cout<<endl;
//   }
//     return 0;
// }

/*last problem*/
// #include <bits/stdc++.h>

// using namespace std;
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int N;
//     cin>>N;int sum=0,sum2=0,mainsum=0;
//     for(int j=0; j<5; j++)
//     {
//         sum=N%10;
//         sum2 +=sum;
     
//         N /=10;
//       for(int k=0; k<N; k +=1)
//       {
//           mainsum +=sum;
// }
//     }

//     cout<<mainsum;
 
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n;
//   cin>>n;
//   int arr[n];
//   for(int j=0; j<n; j++)
//   {
//     cin>>arr[j];
//   }
//   int cnt[10]={0};
//   for(int i=0; i<n; i++)
//   {
//    int val=arr[i];
//    if(val >=0 && val <10)
//    cnt[val]++;
//   }
//   int max=0;
//   for(int k=0; k<10; k++)
//   {
//     if(cnt[k] > max)
//     {
//         max=cnt[k];
//     // cout<<max(cnt,cnt+k)<<endl;
//     }
//   }
//   cout<<max;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int a,b,c;
//   cin>>a>>b>>c;
//   float sum=(a+b+0.01)/2;
// if(sum>c)
// {
//     cout<<"YES";
// }
// else 
// {
//     cout<<"NO";
// }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// int T; cin>>T;
// while(T--)
// {
//   int N,X; cin>>N>>X;

//   if(N%6 !=0)
//   {
//     int sum=(N/6)+1;
//     cout<<sum*X;
//   }
//   else if(N<X)
//   {
//     cout<<"100";
//   }
//   else 
//   {
//     cout<<(N/6)*X;
//   }
//   cout<<endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// string s1("Hello, Dear Student!",15);
// string s2(s1,7);
// cout<<s2<<endl;
  
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   for(int i=1; i<=4; i++)
//   {
//     for(int j=1; j<=i; j++)
//     {
//       cout<<(i+j)%2<<" ";
//     }
//     cout<<endl;
//   }
//     return 0;
// }






/*here have some problem*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int x[]={5,7,9,11,13};
//   int* ptr=x;
//   cout<<(*ptr)++<<" "<<*x * (*(ptr+4)) <<endl;
//   cout<<(*ptr)++<<" "<<*x + (*(ptr + 4));
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

int main()
{

  char arr[100000];
  cin.getline(arr,100000);
  
    return 0;
}