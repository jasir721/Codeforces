#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
static ll md=1e9+7;
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll a,b;
   cin>>a>>b;
   ll n;
   cin>>n;
   ll ans;
   n=n%6;
//    cout<<n<<"\n";
   if(n==0) ans=-b+a;
   else if(n==1) ans=a;
   else if(n==2) ans=b;
   else if(n==3) ans=b-a;
   else if(n==4) ans=-a;
   else ans=-b;
//    cout<<ans<<"\n";
   cout<<(ans%md+md)%md<<endl;
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
      solve();
   return 0;    
}