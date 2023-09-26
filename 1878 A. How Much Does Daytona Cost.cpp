/***

            Author : Razib Dash
            Department of CSE, metropolitan university, Bangladesh.
            FB Linkedln : Avronil Rajib

***/
#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define RAZIB  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define li             long int
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
typedef long long int ll;
typedef unsigned long long int  llu;

void solve()
{
    tc;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==k)
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<"NO";
            nl;
        }
        else
        {
            cout<<"YES";
            nl;
        }

    }

}

int main()
{
   RAZIB;
   solve();

   return 0;
}
