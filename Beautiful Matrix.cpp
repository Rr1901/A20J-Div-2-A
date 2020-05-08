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
    int i,j,r,c,f;
    
    int a[5][5];
    for(i=0;i<5;i++)
     for(j=0;j<5;j++)
        cin>>a[i][j];   
       
      for(i=0;i<5;i++)
      {f=0;
       for(j=0;j<5;j++)
        if(a[i][j]==1)
        {
        f=1;
        break;
        }
            
       if(f==1)
        break;
      }
      r=i-2;
      if(r<0)
       r*=-1;
      c=j-2;
      if(c<0)
      c*=-1;
      
      cout<<c+r<<endl;
      
    return 0;
}