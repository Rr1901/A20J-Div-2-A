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
    int a,b,c,d,p1,p11,p2,p22;
    cin>>a>>b>>c>>d;
    p1=(3*a)/10;
    p11=a-((a/250)*c);
    p1=max(p1,p11);
    p2=(3*b)/10;
    p22=b-((b/250)*d);
    p2=max(p2,p22);
    
    if(p1>p2)
    cout<<"Misha";
    else if(p2>p1)
    cout<<"Vasya";
    else
    cout<<"Tie";

    return 0;
}
