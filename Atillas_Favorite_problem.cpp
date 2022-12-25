#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       string ar;
       cin>>ar;
       sort(ar.begin(),ar.end());
       char M=ar[n-1];
       char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
       'q','r','s','t','u','v','w','x','y','z'};
        for(int i=0;i<26;i++)
        {
            if(arr[i]==M)
            {
                cout<<i+1<<endl;
            }
        }

    }
}
