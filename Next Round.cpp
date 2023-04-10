#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=ar[k-1]&&ar[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
