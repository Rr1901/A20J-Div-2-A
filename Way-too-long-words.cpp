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
  int n,t,a,b,j;
  cin>>a;
   string s;
   for(j=0;j<a;j++)
   {
  cin>>s;
   t=s.length();
   if(t<=10)
   cout<<s<<endl;
   else
   {
    n=t-2;
    cout<<s[0]<<n<<s[t-1]<<endl;
    }
  
   }
   return 0; 
}