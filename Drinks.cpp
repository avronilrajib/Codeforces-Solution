#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
   double sum=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        sum+=v[i];

    }
   double s=sum/v.size();
   printf("%.12f",s);
}
