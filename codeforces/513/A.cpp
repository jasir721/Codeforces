   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(ll i=0;i<n;i++)
   ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      ll n1,n2,k1,k2;
      cin>>n1>>n2>>k1>>k2;
      if(n1==n2)
          cout<<"Second\n";
    else if(n1>n2)
    cout<<"First"<<"\n";
    else if(n2>n1)
    cout<<"Second"<<"\n";

   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }