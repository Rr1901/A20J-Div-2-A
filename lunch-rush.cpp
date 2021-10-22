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
    int n,k,i,j;
    cin>>n>>k;
    int a[n][2];
    priority_queue<int>p;
    for(int i=0;i<n;i++)
     for(j=0;j<2;j++)
      cin>>a[i][j];
      
    for(int i=0;i<n;i++)
      if(a[i][1]>k)
      a[i][1]=a[i][1]-k;
      else
      a[i][1]=0;
         
    for(int i=0;i<n;i++)
       a[i][0]-=a[i][1];
  
       for(int i=0;i<n;i++)
       p.push(a[i][0]);
        cout<<p.top()<<endl;
    return 0;
}

