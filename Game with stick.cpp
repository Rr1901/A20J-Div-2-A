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
    int c=0,n,m;
    cin>>n>>m;
    
    while(n!=0&&m!=0)
    {
        n-=1;
        m-=1;
        c++;
    }
    if(c%2!=0)
    cout<<"Akshat";
    else
    cout<<"Malvika";

    return 0;
}
