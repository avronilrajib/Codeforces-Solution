#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int count=0;

        vector<int>v[n];
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v[i].push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v[i+1])
            {
                count++;
            }
        }
        cout<<count<<endl;

}
