/******************************************************************************

hey user this code is edited by sahil dabhi and first you think about solution yourself own and then see the code because otherwise it is not beneficial for you . 

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    int a[n][2];
    priority_queue<int>p;
    for(int i=0;i<n;i++)
     for(j=0;j<2;j++)
      cin>>a[i][j];
      
    for(int i=0;i<n;i++)
      if(a[i][1]>k)
      a[i][1]=a[i][1]-k;
      else
      a[i][1]=0;
         
    for(int i=0;i<n;i++)
       a[i][0]-=a[i][1];
  
       for(int i=0;i<n;i++)
       p.push(a[i][0]);
        cout<<p.top()<<endl;
    return 0;
}

