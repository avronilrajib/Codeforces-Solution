#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        int mina=0,bina=0;

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];

            if(ar[i]%2==0)
            {
                mina+=ar[i];
            }else
            {
                bina+=ar[i];
            }
        }


               if(mina>bina)
               {
                   cout<<"YES"<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
               mina=0;

               bina=0;

    }

}
