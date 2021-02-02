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
      sort(a,a+n);
      cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<"\n";
      for(int i=1;i<n-1;i++)
      cout<<min(a[i+1]-a[i],a[i]-a[i-1])<<" "<<max(a[n-1]-a[i],a[i]-a[0])<<"\n";
      cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<"\n";
      }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }