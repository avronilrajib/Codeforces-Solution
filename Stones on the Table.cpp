#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int c=0;
     string s;
     cin>>s;
    for(int i=0;i<n;i++)
    {

        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    cout<<c;
}
