#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=max(a,b);
        int y=max(c,d);
        int x1=min(a,b);
        int y1=min(c,d);
        if(x1>y||y1>x)
        {
            cout<<"NO"<<endl;
        }else

        cout<<"YES"<<endl;
    }
}
