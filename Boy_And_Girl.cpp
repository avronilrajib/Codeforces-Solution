#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     map<char,int>mp;
     string s1;
     for(int i=0;i<s.size();i++)
     {
         mp[s[i]]++;
     }
     for(auto a:mp)
     {
         s1+=a.first;
     }
     int n=s1.size();
     if(n%2==0)
     {
         cout<<"CHAT WITH HER!"<<endl;
     }else
        {
            cout<<"IGNORE HIM!"<<endl;
        }




}

