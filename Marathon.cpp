#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int count=0;
    while(t--)
    {
        int ar[4];
        for(int i=0;i<4;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<3;i++)
        {
             if(ar[0]<ar[i+1])
            {
                count++;
            }
        }

       cout<<count<<endl;
       count=0;
    }
}
