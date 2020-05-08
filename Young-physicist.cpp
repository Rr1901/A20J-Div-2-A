/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int i,n,f,c=0,sum,j;
    
    cin>>n;
    int a[n][3];
    
    for(i=0;i<n;i++)
     for(j=0;j<3;j++)
      cin>>a[i][j];
    
    for(i=0;i<3;i++)
    {
      f=0;sum=0;   
     for(j=0;j<n;j++)
       sum+=a[j][i];
     if(sum==0)
     {
     f=1;
     c++;    
     }
     if(f==0)
      break;
    }
    if(c==3)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
