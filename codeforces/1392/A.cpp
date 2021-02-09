#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a[n];
   map<int,int>v;
   fr(i,n)
   {
       cin>>a[i];
       v[a[i]]++;
   }
   if(v[a[0]]==n)
   cout<<n<<"\n";
   else
   cout<<1<<"\n";
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