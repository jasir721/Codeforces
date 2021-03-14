#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   int a[n];
   fr(i,n)
   cin>>a[i];
   int i=0,prev=0;
   while(i<n-1&&k!=0)
   {
	   if(a[i]>=a[i+1])
	   {
		   i++;
	   }
	   else
	   {
		   k--;
		   a[i]++;
		   prev=i;
		   i=0;
	   }
   }
   if(k!=0)
   cout<<-1<<"\n";
   else
   cout<<prev+1<<"\n";
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