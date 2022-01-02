#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s;
    cin>>s;
    ll cb=0,cs=0,cc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B') cb++;
        else if(s[i]=='S') cs++;
        else cc++;
    }
    ll A[3],B[3];
    for(int i=0;i<3;i++) cin>>A[i];
    for(int i=0;i<3;i++) cin>>B[i];
    ll r=0;
    cin>>r;
    ll l=0,h=1e15,ans=0;
    while(l<=h)
    {
        ll x=(l+h)/2;
        ll cost=max(0ll,cb*x-A[0])*B[0]+max(0ll,cs*x-A[1])*B[1]+max(0ll,cc*x-A[2])*B[2];
        if(cost==r)
        {
            cout<<x<<"\n";
            return;
        }
        if(cost<r)
        {
            l=x+1;
        }else
        h=x-1;
    }
    cout<<l-1<<"\n";
    return;
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