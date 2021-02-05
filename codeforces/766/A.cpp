   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      string a,b;
      cin>>a>>b;
      int n,m;
      if(a==b)
      cout<<-1;
      else 
      {
      n=a.length();
      m=b.length();
      if(n>m)
      cout<<n;
      else
      cout<<m;
      }
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }