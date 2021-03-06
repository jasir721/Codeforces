#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a[n];
   map<int,int>m;
   fr(i,n)
   {
   cin>>a[i];
   }
   int prev=0;
   sort(a,a+n);
   for(int z=1;z<(2*n)+1;z++)
   {
      int count=0;
      int s=z;
      int i=0,j=n-1;
      while(i!=j)
      {
         if(a[i]+a[j]==s)
         {
         count++;
         i++;
         if(i!=j)
         j--;}
         else if(a[i]+a[j]<s)
         i++;
         else 
         j--;
      }
      prev=max(prev,count);
   }
   cout<<prev<<"\n";
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