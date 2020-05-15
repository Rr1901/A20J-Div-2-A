/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int i,j,n;
     cin>>n;
     
     if(n%2!=0)
     {
         cout<<-1;
         return 0;
     }
     for(i=1;i<=n;i++)
     {
         if(i%2!=0)
         j=i+1;
         else
         j=i-1;
         cout<<j<<" ";
     }

    return 0;
}
