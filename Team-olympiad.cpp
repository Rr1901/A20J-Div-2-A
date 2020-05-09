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
    int n,i;
    cin>>n;
    int a[n];
    vector<int >v1;
    vector<int >v2;
    vector<int >v3;

  for(i=0;i<n;i++)
  cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        v1.push_back(i+1);
        else if(a[i]==2)
        v2.push_back(i+1);
        else
        v3.push_back(i+1);
    }
    
auto i1=v1.begin();
auto i2=v2.begin();
auto i3=v3.begin();
int s=min(v1.size(),min(v3.size(),v2.size()));
cout<<s<<endl;
    for(i=0;i<s;i++)
    {
        cout<<*i1<<" "<<*i2<<" "<<*i3<<endl;
        i1++;i2++;i3++;
    }

    return 0;
}
