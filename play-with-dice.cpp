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
    int a,b,ca=0,cb=0,da,db,i,c=0;
    cin>>a>>b;
    for(i=1;i<=6;i++)
    {
        da=abs(a-i);
        db=abs(b-i);
        if(da==db)
        c++;
        else
        {
        if(da>db)
        cb++;
        else
        ca++;
        }
    }
  cout<<ca<<" "<<c<<" "<<cb;
    return 0;
}
