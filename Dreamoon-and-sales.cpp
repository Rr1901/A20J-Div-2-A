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
    int n,m,i,c,j;
    
    cin>>n>>m;
//         c=m*2;
//         int k=n-m;
   if(m>n)
   {
     cout<<"-1"<<endl;
   return 0;
}//   else
//     {
        
//         i=n%c;
//         j=n/c;
//         c=c/2;
//         cout<<c*j+i;
         int x,y;
       
         i=1;
         j=m;
         y=2*m-n;
         while(y<0)
         {
             i++;
            m=j*i;
             y=2*m-n;
         }
         //  m=j*(i--);
           x=m-y;
           cout<<x+y<<endl;
    
    
    return 0;
}

