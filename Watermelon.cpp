/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,a,b;
  cin>>n;
  if(n%2!=0||n==0)
  {
  cout<<"NO";
return 0;      
  }
  n/=2;
  a=n-1;
  b=n+1;
  if(n%2==0||a%2==0)
  cout<<"YES";
  
}

