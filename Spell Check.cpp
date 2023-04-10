#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
        if(s[i]=="Timur")
        {
            cout<<"YES"<<endl;
        }
        else if(s[i]=="miurT")
             {
            cout<<"YES"<<endl;
        }
         else if(s[i]=="Trumi")
             {
            cout<<"YES"<<endl;
        }
         else if(s[i]=="mriTu")
             {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }
    }
}
