#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;


   while(t--)
   {
        string s;
    cin>>s;
       int m=s.size()/2;
    int s1=0;
    int s2=0;
        for(int i=0;i<s.size()/2;i++)
    {
        s1+=s[i];
    }
    for(int i=m;i<s.size();i++)
    {
        s2+=s[i];
    }
    if(s1==s2)
    {
        cout<<"YES"<<endl;
    }else
     cout<<"NO"<<endl;

      s1=0;
      s2=0;

   }
}
