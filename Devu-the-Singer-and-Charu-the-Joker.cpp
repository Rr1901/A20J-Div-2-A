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
 int i,n,t,f,d=10,c=0;
 
 cin>>n>>f;
 
 int a[n];
 
 for(i=0;i<n;i++)
 cin>>a[i];
 
t=f;
 for(i=n-1;i>=0;i--)
 {
     t=t-a[i];
     if(i==0)
     break;
     c+=2;
     t-= d;
 }
 if(t<0)
 {
     cout<<"-1";
     return 0;
 }else
 {
     if(t>=5)
     {
     c+=t/5;
     cout<<c;
     return 0;
     }
     else
     cout<<c;
 }

    return 0;
}
