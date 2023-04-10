#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int ans=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a&&b&&c==1)
        {
            ans++;
        }
        else if(a&&b==1)
        {
            ans++;
        }
        else if(b&&c==1)
        {
            ans++;
        }
        else if(a&&c==1)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
