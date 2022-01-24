#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n;
   cin>>n;
   if(n<=2)
   {
       cout<<n<<"\n";
       return;
   }
   ll ans=1;
   if(n%2==0)
   {
       if(n%3==0)
       ans=(n-1)*(n-2)*(n-3);
       else
       ans=n*(n-1)*(n-3);
   }
   else 
   {
       ans=(n-1)*(n-2)*(n);
   }
   cout<<ans<<"\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t;
   // cin>>t;
   // while(t--)
      solve();
   return 0;    
}