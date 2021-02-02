   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      int n;
      cin>>n;
      int a[n],b[n];
      fr(i,n)
      cin>>a[i]>>b[i];
      int s=0;
      fr(i,n)
      {
         s+=(a[i]*b[i]);
         // cout<<s<<"\t";
         int j=i;
         while(i+1<n&&b[j]<b[i+1])
         {
            s+=(a[i+1]*b[j]);
            // cout<<s<<"\t";
            i++;
         }
      }
      // cout<<"\n";
      cout<<s<<"\n";
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }