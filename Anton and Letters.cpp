#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c=0;
    sort(s.begin(),s.end());
    for(int i=0;i<=s.size()-2;i++)
    {
        if(s[i]=='{}'|| s[i]==','||s[i]==' ')
            {
                continue;
            }
            if(s[i]!=s[i+1])
            {
                c++;
            }
    }
    cout<<c-1<<endl;
}
