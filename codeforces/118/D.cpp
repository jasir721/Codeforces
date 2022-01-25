#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n1,n2,k1,k2;
   ll md=1e8;
   cin>>n1>>n2>>k1>>k2;
   ll t[n1+1][n2+1][k1+1][k2+1];
   memset(t,0,sizeof t);
   for(int f=0;f<=n1;f++)
   {
       for(int h=0;h<=n2;h++)
       {
           for(int kf=0;kf<=k1;kf++)
           {
               for(int kh=0;kh<=k2;kh++)
               {
                   ll ans=0;
                   if(f+h==0)
                   {
                       ans=1;
                   }
                   else
                   {
                       ans=0;
                       if(f>0 and kf>0) ans=(ans+t[f-1][h][kf-1][k2])%md;
                       if(h>0 and kh>0) ans=(ans+t[f][h-1][k1][kh-1])%md;
                   }
                   t[f][h][kf][kh]=ans;
               }
           }
       }
   }
   cout<<t[n1][n2][k1][k2]<<"\n";
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