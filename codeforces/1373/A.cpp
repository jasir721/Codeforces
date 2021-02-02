   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      ll a,b,c;
      cin>>a>>b>>c;
      if(a<c)
      cout<<1;
      else
      cout<<-1;
      if(c<a*b)
      cout<<" "<<b<<"\n";
      else
      cout<<" "<<-1<<"\n"; 
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