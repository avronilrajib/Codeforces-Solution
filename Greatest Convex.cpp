#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int c=-1 ,s=0;
        for(int i=1;i<=n;i++)
        {
          if(n>0)
          {
            s*=i;
            c++;
          }
        }
        cout<<c<<endl;
    }
}
