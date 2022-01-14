#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   vector<pair<int,int>>A;
   int mn=INT_MAX,mx=INT_MIN;
   for(int i=0;i<n;i++)
   {
       int x,y;
       cin>>x>>y;
       A.push_back({x,y});
        mn=min(mn,x);
        mx=max(mx,y);
   }
   for(int i=0;i<n;i++)
   {
       if(A[i].first==mn and A[i].second==mx)
       {
           cout<<i+1<<"\n";
           return;
       }
   }
   cout<<"-1\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
//    cin>>t;
//    while(t--)
      solve();
   return 0;    
}