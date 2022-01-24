#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n,r,avg;
   cin>>n>>r>>avg;
   vector<pair<ll,ll>>A(n);
   ll sum=0,total=0;
   fr(i,n)
   {
       cin>>A[i].second>>A[i].first;
       sum+=A[i].second;
   }
   sort(A.begin(),A.end());
   ll i=0;
   while(n*avg>sum and i<n)
   {
       ll mn=min(n*avg-sum,r-A[i].second);
       total+=mn*A[i].first;
       sum+=mn;
       i++;
   }
   cout<<total<<"\n";

}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t;
   // cin>>t;
   // while(t--)
      solve();
   return 0;    
}