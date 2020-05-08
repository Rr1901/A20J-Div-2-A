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
    set<int >s;
    int i,t,x,y,a;
    cin>>t;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cin>>y;
    for(i=0;i<y;i++)
    {
        cin>>a;
        s.insert(a);
    }
    if(s.size()==t)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
    return 0;
}
