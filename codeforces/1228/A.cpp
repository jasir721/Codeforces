   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      int l,r;
      cin>>l>>r;
      for(int i=l;i<=r;i++)
      {
         int d=floor(log10(i)+1);
         int n=i;
         set<int>s;
         while(n!=0)
         {
            s.insert(n%10);
            n/=10;
         }
         if(s.size()==d)
         {
            cout<<i<<"\n";
            return;
         }
      }
      cout<<-1;
      return;
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }