#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string s="hello";
     int s_size=s.size();
     int cont=0;
    for(int i=0;i<str.size();i++)
    {
        if(s[cont]==str[i])
        {
            cont++;

        }else
        {
            str[i]=str[i+1];
        }
    }
    if(cont==s_size)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }

}
