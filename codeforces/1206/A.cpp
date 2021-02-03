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
      fr(i,n)
      cin>>a[i];
      int m;
      cin>>m;
      int b[m];
      fr(i,m)
      cin>>b[i];
      sort(a,a+n);
      sort(b,b+m);
      cout<<a[n-1]<<" "<<b[m-1]<<"\n";
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }