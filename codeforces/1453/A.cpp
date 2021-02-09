#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m,c=0;
   cin>>n>>m;
   map<int,int>v;
   int a[n],b[m];
   fr(i,n)
   {
       cin>>a[i];
       v[a[i]]++;
   }
   fr(i,m)
   {
       cin>>b[i];
       if(v[b[i]]==1)
       c++;
   }
    cout<<c<<"\n";

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