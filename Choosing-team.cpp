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
    int i,n,k,c=0,a;
    vector<int >v ;
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    {
    cin>>a;
    a+=k;
        if(a<=5)
        v.push_back(a);
        // if(v.size()%3==0&&v.size()!=0)
        // c++;
    }
         if(v.size()==0)
         cout<<0;
         else
        cout<<v.size()/3;
    return 0;
}
