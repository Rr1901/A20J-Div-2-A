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
  int  n, k, l, c, d, p, nl, np;
  cin>> n>> k>> l>>c>> d>> p>> nl>> np;
  int kl,cd;
  kl=k*l;
  cd=c*d;
  kl=kl/nl;
  cd=cd;
  p=p/np;
  int m;
  m=min(cd,min(p,kl));
  cout<<m/n;
    return 0;
}
