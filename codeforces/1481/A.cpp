#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   int l=0,r=0,d=0,u=0;
   fr(i,s.length())
   {
	   if(s[i]=='L')
	   l++;
	   else if(s[i]=='R')
	   r++;
	   else if(s[i]=='U')
	   u++;
	   else if(s[i]=='D')
	   d++;
   }
//    cout<<l<<" "<<r<<" "<<u<<" "<<d<<"\n";
   if(n<0)
   {
	   if(abs(n)>l)
	   {
		   cout<<"NO\n";
		   return;
	   }
   }
      if(n>=0)
   {
	   if(abs(n)>r)
	   {
		   cout<<"NO\n";
		   return;
	   }
   }
      if(m<0)
   {
	   if(abs(m)>d)
	   {
		   cout<<"NO\n";
		   return;
	   }
   }
      if(m>=0)
   {
	   if(m>u)
	   {
		   cout<<"NO	\n";
		   return;
	   }
   }
   cout<<"YES\n";


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