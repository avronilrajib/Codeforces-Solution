#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        string s1="codeforces";
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==s1[i])
           {
               continue;
           }else
           {
               c++;
           }
        }
        cout<<c<<endl;
    }
}
