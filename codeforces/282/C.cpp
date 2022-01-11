#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
    {
        cout<<"NO\n";
        return;
    }
    bool a=false,b=false;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        a=true;
    }
    for(int i=0;i<n;i++)
    {
        if(t[i]=='1')
        b=true;
    }
    if((a and b) || (a==false and b==false))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
      solve();
   return 0;    
}