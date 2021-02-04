   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      int n;
      cin>>n;
      int j=1;
      int k=0;
      for(int i=1;i<=n;i++)
      {
         j+=k;
         k+=4;
      }
      cout<<j;

   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }