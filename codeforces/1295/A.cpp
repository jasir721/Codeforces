   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      int n;
      cin>>n;
      if(n%2==0)
      {
          fr(i,n/2)
          cout<<1;
          cout<<"\n";
      }
      else
      {
          n-=3;
          cout<<7;
          fr(i,n/2)
          cout<<1;
          cout<<"\n";
      }
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