#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n,k;
   cin>>n>>k;
   vector<pair<ll,ll>>v;
   ll A[n],B[n];
   fr(i,n) cin>>A[i];
   fr(i,n) cin>>B[i];
   fr(i,n)
   {
       v.push_back({A[i],B[i]});
   }
   sort(v.begin(),v.end());
   fr(i,n)
   {
       if(k>=v[i].first)
       {
           k+=v[i].second;
       }
       else
       {
           break;
       }
   }
   cout<<k<<"\n";
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