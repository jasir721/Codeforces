#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   if(k>=n/2)
   {
      reverse(s.begin(),s.end());
      k=n-1-k+1;
   }
   else
   {
      k--;
   }
   int l=0,r=(n/2)-1;
   for(;l<n/2;l++)
   {
      if(s[n-1-l]!=s[l])
      {
         break;
      }
   }
   if(l==n/2)
   {
      cout<<0<<"\n";
      return;
   }
   for(;r>=0;r--)
   {
      if(s[n-1-r]!=s[r])
      {
         break;
      }
   }
   int count=0;
   int prev=l;
   while(l<=r)
   {
      count+=min(abs(s[l]-s[n-1-l]),abs(26-(abs(s[l]-s[n-1-l]))));
      count++;
      // cout<<count<<" ";
      l++;
   }
   count--;
   l--;
   count+=min(abs(k-prev),abs(k-r));
   cout<<count<<"\n";
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