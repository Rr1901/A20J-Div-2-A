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
    int i,n;
    vector<int >v1 ;
    vector<int >v2 ;
    
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        v1.push_back(i);
        else
        v2.push_back(i);
    }
    if(v1.size()==1)
      cout<<v1[0]+1;
      else
      cout<<v2[0]+1;
    return 0;
}
