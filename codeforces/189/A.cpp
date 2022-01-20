#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a,b,c;
   cin>>a>>b>>c;
   int ans=0;
   for(int i=0;i*a<=n;i++)
   {
       for(int j=0;(i*a)+(j*b)<=n;j++)
       {
           int rem=n-a*i-b*j;
           if(rem%c==0)
           {
               int k=rem/c;
               ans=max(ans,i+j+k);
           }
       }
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