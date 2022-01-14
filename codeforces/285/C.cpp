#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   vector<int>A;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       A.push_back(x);
   }
   sort(A.begin(),A.end());
   ll ans=0;
   for(int i=0;i<n;i++)
   {
       ans+=(abs(i+1-A[i]));
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