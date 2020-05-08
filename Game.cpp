/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int
main ()
{

  int n, i, j,c=0;
  cin >> n;
  int a[n][2];

  for (i = 0; i < n; i++)
    for (j = 0; j < 2; j++)
      cin >> a[i][j];
   
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
       if(i!=j)
        {
            if(a[i][0]==a[j][1])
            c++;
        }

 cout<<c;
  return 0;
}
