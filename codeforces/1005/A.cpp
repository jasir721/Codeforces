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
      int j=0;
      vector<int>v;
      for(int i=1;i<n;i++)
      {
         if(a[i]<=a[i-1])
         {
            j++;
            v.push_back(a[i-1]);
         }
      }
      v.push_back(a[n-1]);
      cout<<j+1<<"\n";
      for(auto& it:v)
      cout<<it<<" ";
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }