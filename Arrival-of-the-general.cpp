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
   int i,j,max=0,min=10000,n,lp,hp;
   int a[1000];
   cin>>n;
   for(i=0;i<n;i++)
     cin>>a[i];
     
   for(i=0;i<n;i++)
       {
           if(a[i]>max)
           {
            max=a[i];   
           hp=i;
           }
           if(a[i]<=min)
           {
               min=a[i];
               lp=i;
           }
       }
  max=hp-0;
  if(hp>lp)
  min=n-2-lp;
  else
  min=n-lp-1;
  cout<<min+max;
    return 0;
}
