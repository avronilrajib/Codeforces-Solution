#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if(x1<=y1&&x2<=y2&&x3<=y3)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
