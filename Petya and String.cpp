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
    string s,s1;
    int i,j;
    cin>>s>>s1;
    for(i=0;s[i]!='\0';i++)
      if(s[i]<97)
      s[i]+=32;
        for(i=0;s1[i]!='\0';i++)
      if(s1[i]<97)
      s1[i]+=32;
    int f=0;
   for(i=0;i<s.size();i++)
    if(s[i]==s1[i]);
    else
    { 
        if(s[i]>s1[i])
        cout<<"1"<<endl;
        else
        cout<<"-1"<<endl;
       return 0;
    }
    cout<<"0"<<endl;
      return 0;
}
