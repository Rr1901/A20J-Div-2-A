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
    char c;
    set<char,greater<char>>s;
    
    while(c!='}')
    {   
       {
        cin>>c;
         if(c!='{'&&c!=',')
        s.insert(c);
       }
    }
    
    cout<<s.size();
    
    
    return 0;
}

