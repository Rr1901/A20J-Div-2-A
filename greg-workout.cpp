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
    
    int c=0,bi=0,ba=0,i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n;i+=3)
    {    if(i<n)
        c+=a[i];
        if(i+1<n)
        bi+=a[i+1];
        if(i+2<n)
        ba+=a[i+2];
      
    }

    if(c>bi&&c>ba)
    cout<<"chest";
    else if(ba>bi&&ba>c)
    cout<<"back";
    else
    cout<<"biceps";

    return 0;
}
