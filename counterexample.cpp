/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main ()
{
  int l,r;
  cin>>l>>r;
  if(l+2>r)
  {
      cout<<-1<<endl;
      return 0;
  }
  
  if(l==2)
  {
  cout<<l<<" "<<l+1<<" "<<l+2;
  return 0;
  }else if(l%2==0)
  {
      cout<<l<<" "<<l+1<<" "<<l+2;
      return 0;
  }
  else if(l+2!=r)
  {
      l++;
      cout<<l<<" "<<l+1<<" "<<l+2;
      
      return 0;
  }
  
  cout<<-1<<endl;
  return 0;
}
