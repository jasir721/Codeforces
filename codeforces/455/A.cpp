#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n;
   cin>>n;
   map<ll,ll>cnt;
   ll mx=INT_MIN;
   for(ll i=0;i<n;i++)
   {
       ll  x;
       cin>>x;
        cnt[x]++;
        mx=max(mx,x);
   }
   vector<ll>A(mx+1,0);
   A[1]=cnt[1];
   for(ll i=2;i<=mx;i++)    
   {
       A[i]=max(A[i-1],A[i-2]+cnt[i]*i);
   }
   cout<<A[mx]<<"\n";
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