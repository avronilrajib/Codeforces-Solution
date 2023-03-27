#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(2<=q-p)
        {
            c++;
        }
    }
     cout<<c<<endl;
     return 0;
}
