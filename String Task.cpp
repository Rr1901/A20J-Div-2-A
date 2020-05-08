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
  string s;
  vector<char>v;
  
  int i,j=0;
  cin>>s;
  
 
  for(i=0;s[i]!='\0';i++)
     {
         
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='y') 
        ;
        else  if(s[i]<95)
        {
          v.push_back('.');  
          s[i]+=32;
          v.push_back(s[i]);
        }
        else 
        {
          v.push_back('.');    
        v.push_back(s[i]);
        }
     }
     
    for(i=0;i<v.size();i++)
     cout<<v[i];
     return 0;
}