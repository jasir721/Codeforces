   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(ll i=0;i<n;i++)
   ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      ll a[3],sum=0;
      fr(i,3)
      {
      cin>>a[i];
      }
      sort(a,a+3);
      if(a[0]+a[1]>=a[2])
      cout<<1<<"\n";
      else
      cout<<a[2]-a[0]-a[1]+1<<"\n";

   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
      ll t;
      cin>>t;
      while(t--)
         solve();
      return 0;    
   }