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
    int i,j,n,m;
    long long v,a[51];
    cin>>n>>v;
    vector<int >x;
    for(i=0;i<n;i++)
    {
        cin>>m;
        for(j=0;j<m;j++)
        cin>>a[j];
        for(j=0;j<m;j++)
         if(a[j]<v)
         {
             x.push_back(i+1);
             break;
         }
    }
    cout<<x.size()<<endl;
    for(i=0;i<x.size();i++)
    cout<<x[i]<<" ";

    return 0;
}
