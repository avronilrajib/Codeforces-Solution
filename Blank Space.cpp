#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
         int max_ln=0;
         int c_ln=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                c_ln=0;
            }else{
              c_ln++;
              if(c_ln>max_ln)
              {
                  max_ln=c_ln;
              }

            }
        }
        cout<<max_ln<<endl;
    }
}
