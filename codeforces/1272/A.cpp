#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll a[3];
   fr(i,3)
   cin>>a[i];
   sort(a,a+3);
   if(a[0]!=a[1])
   a[0]+=1;
   else if(a[0]==a[1]&&a[1]!=a[2])
   {
      a[0]+=1;
      a[1]+=1;
   }
   if(a[1]!=a[2])
   a[2]-=1;
   else if(a[1]==a[2]&&a[0]!=a[1])
   {
      a[1]-=1;
      a[2]-=1;
   }
   cout<<abs(a[0]-a[1])+abs(a[1]-a[2])+abs(a[0]-a[2])<<"\n";
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