   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(ll i=0;i<n;i++)
   ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
   ll maxi(ll a[],ll n)
   {
      ll max=a[0],j=0;
      for(ll i=1;i<n;i++)
      {
         if(a[i]>max)
         {
            max=a[i];
            j=i;
         }
      }
      return j;
   }
   ll mini(ll a[],ll n)
   {
      ll min=a[0],j=0;
      for(ll i=1;i<n;i++)
      {
         if(a[i]<min)
         {
            min=a[i];
            j=i;
         }
      }
      return j;
   }
   /*********************************************************************************************************************/
   void solve()
   {   
      ll n,k;
      cin>>n>>k;
      ll m,j=0;
      char a;
      fr(i,n)
      {
         cin>>a>>m;
         if(a=='+')
         {
            k+=m;
         }
         else if(a=='-')
         {
            if(k-m<0)
            j++;
            else
            k-=m;
         }
      }
      cout<<k<<" "<<j;
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }