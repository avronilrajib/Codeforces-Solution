#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int h,s;
        cin>>h>>s;
        if(h>0)
        {
            int sec=h*60+s;
            cout<<1440-sec<<endl;
        }else
        {
            cout<<1440-s<<endl;
        }
    }
}
