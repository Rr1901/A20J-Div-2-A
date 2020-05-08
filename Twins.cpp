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
  int i,j,n,s=0,k=0;
  std::vector<int>v ;
  cin>>n;
  for(i=0;i<n;i++)
  {
  cin>>j;
  v.push_back(j);      
  }
  int sum=0;
  for(i=0;i<v.size();i++)
  sum+=v[i];
 
  sum=(sum/2)+ 1;
 
  sort(v.begin(),v.end());
  
  for(i=n-1;i>=0;i--)
  {
      s+=v[i];
      k++;
      if(s>=sum)
      {
          
      cout<<k;
      break;
      }
  }
    
    return 0;
}