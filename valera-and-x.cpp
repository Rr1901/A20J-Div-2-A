/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
     char d,l;
     int i,j,n;
     
     cin>>n;
     char a[n][n];
     
     for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        cin>>a[i][j];
        d=a[0][0];
        l=a[0][1];
        
        
        if(d==l)
        {
            cout<<"NO";
        return 0; 
        }
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)     
        {
            if(i==j||i+j==n-1)
            {
            if(a[i][j]!=d)
              {
                cout<<"NO";
                return 0;
              }
            }
            else
            {
            if(a[i][j]!=l)
              {
                cout<<"NO";
                return 0;
              }
            }
        }
        cout<<"YES";
    return 0;
}











