/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,a;
    vector<int>v;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a;
     v.push_back(a);
    }
     sort(v.begin(),v.end());
     auto min=1000;
     i=0;
        while((i+n-1)<=v.size()-1)
        {
            if(v[i+n-1]-v[i]<min)
            min=v[i+n-1]-v[i];
            i++;
            break;
        }
        cout<<min;
        return 0;
}
