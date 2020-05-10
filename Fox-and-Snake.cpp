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
   int i,j,n,m,k=0,f;
   cin>>m>>n;
   
   for(j=0;j<m;j++)
   { f=0;
       for(i=0;i<n;i++)
       {
           if(j%2==0)
           cout<<"#";
           else
            if(k%2==0)
            {
                f=1;
                if(i==n-1)
                cout<<"#";
                else
                cout<<".";
            }
            else
            {   f=1;
                if(i==0)
                cout<<"#";
                else
                cout<<".";
            }
    
       }
       if(f==1)
       k++;
       cout<<endl;
   }
   
    return 0;
}
