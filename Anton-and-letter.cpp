/* this is a code written in cpp and you use this for your reference but first think solution on your self */
#include <bits/stdc++.h>

using namespace std;
int main()
{
    char c;
    set<char,greater<char>>s;
    
    while(c!='}')
    {   
       {
        cin>>c;
         if(c!='{'&&c!=',')
        s.insert(c);
       }
    }
    
    cout<<s.size();
    
    
    return 0;
}

