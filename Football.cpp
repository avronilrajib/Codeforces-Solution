#include<bits/stdc++.h>
using namespace std;
int main()
{

   int i,count=0,x=0,y=0;
    string s;
    cin>>s;
    for(i=0;i<=s.size();i++)
    {
        if(s[i]=='1')
        {
           count++;
           x=0;
        }
        else
        {
            x++;
            count=0;
        }
        if(count==7||x==7)
        {
            y=1;
        }
    }
    if(y==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
