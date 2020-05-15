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
    int n,i,d,min=1000,pos,j;
    cin>>n;
    int a[n];
    vector<int>v;
    
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n-2;i++)
     if(a[i+2]-a[i]<min)
        {
            min=a[i+2]-a[i];
            pos=i+1;
        }
   
    for(i=0;i<n;i++)
      if(i!=pos)
      v.push_back(a[i]);
     
      min=-1;
      
      for(i=0;i<v.size()-1;i++)
      {
          if(v[i+1]-v[i]>min)
          min=v[i+1]-v[i];
      }
      cout<<min;
    return 0;
}
