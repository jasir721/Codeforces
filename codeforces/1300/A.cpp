   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      int n;
      cin>>n;
      int a[n],j=0,sum=0;
      fr(i,n)
      {
          cin>>a[i];
          if(a[i]==0)
          {a[i]++;
          j++;}
          sum+=a[i];
      }
      if(sum==0)
      cout<<j+1<<"\n";
      else
      cout<<j<<"\n";
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