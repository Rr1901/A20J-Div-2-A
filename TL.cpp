/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector <int>
#define vp vector <pair<int,int>>
#define pb push_back
#define mp make_pair
#define f(x,y,z) for(x=y;x<z;x++)

//Author Rahul

void solve()
{
    int n,m;
    vi v,s;
    int i,j,a;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<m;i++)
    {
        cin>>a;
        s.push_back(a);
    }
    int minv,maxv,mins;
    minv=*min_element(v.begin(),v.end());
    maxv=*max_element(v.begin(),v.end());
    mins=*min_element(s.begin(),s.end());
    
    maxv=max(minv*2,maxv);
    if(mins>maxv)
    cout<<maxv<<endl;
    else
    cout<<-1<<endl;
}


int32_t main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}
 
 
