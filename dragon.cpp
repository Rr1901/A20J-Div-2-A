/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
int main()
{
   int s,n;
   cin>>s>>n;
   pair<int,int>p[n];
   
   int i,j;
   for(i=0;i<n;i++)
       { 
           int k;
           cin>>k;
          p[i].first=k;
          cin>>k;
          p[i].second=k;
       }
    
    sort(p,p+n);
    
     for(i=0;i<n;i++)
      {
          if(s<=p[i].first)
          {
              cout<<"NO"<<endl;
              return 0;
          }
          else{
              s+=p[i].second;
          }
      }
      cout<<"YES"<<endl;
  
    return 0;
}
