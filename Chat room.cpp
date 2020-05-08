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
    string s,h;
    h="hello";
    
    cin>>s;
    int i=0,j=0,f=0;
    for(j;h[j]!='\0';j++)
    {
        f=0;
    for(;s[i]!='\0';i++)
      if(h[j]==s[i]||s[i]==h[j-1])
      {
          if(s[i]==h[j])
          {
           f=1; 
           break;        
          }
      }
      
      
      i++;
      if(f==0)
      {
          cout<<"NO";
          return 0;
      }
    }
    if(f==1)
    cout<<"YES";
    return 0;
}