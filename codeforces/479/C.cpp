#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       v.push_back({a,b});
   }
   sort(v.begin(),v.end());
   int ans=0;
   for(auto it:v)
   {
       if(it.second>=ans)
        {
            ans=it.second;
        }
        else
        {
            ans=it.first;
        }
   }
   cout<<ans<<"\n";
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