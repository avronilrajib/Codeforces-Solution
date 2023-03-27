#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string r="";
    string t;
    cin>>t;
    for(int i=0;i<s.length();i++);
    for(int i=s.length();i>=0;i--)
    {
       cout<<s[i];

    }
    if(s==t)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
