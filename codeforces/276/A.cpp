   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(ll i=0;i<n;i++)
   ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      ll n,k;
      cin>>n>>k;
      ll f[n],t[n],sum[n]={0};
      fr(i,n)
      {
         cin>>f[i]>>t[i];
      }
      fr(i,n)
      {
         if(k-t[i]<0)
         {
            sum[i]=f[i]-(t[i]-k);
         }
         else
         {
            sum[i]=f[i];
         }
      }
      sort(sum,sum+n);
      cout<<sum[n-1]<<"\n";

   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }