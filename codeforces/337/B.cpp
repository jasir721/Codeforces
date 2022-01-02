#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
  int a,b,c,d;
  cin>>a>>b>>c>>d;
 
  pair<int,int> ans = {a*d, b*c};
 
  if(ans.first>ans.second){
    swap(ans.first, ans.second);
  }
 
  ans.first = ans.second - ans.first;
 
  int x = __gcd(ans.first, ans.second);
  cout<<ans.first/x<<"/"<<ans.second/x<<"\n";
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