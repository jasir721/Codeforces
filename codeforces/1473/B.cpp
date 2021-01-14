#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s,t;
    cin>>s>>t;
    int s1=s.length(),t1=t.length();
    int lcm=s1*t1/gcd(s1,t1);
    string a,b;
    for(int i=0;i<(lcm/s1);i++)
    {
        a=a+s;
    }
    fr(i,(lcm/t1))
    {
        b=b+t;
    }
    fr(i,lcm)
    {
        if(a[i]!=b[i])
        {
            cout<<"-1\n";
            return;
        }
    }
    cout<<a<<"\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;    
}