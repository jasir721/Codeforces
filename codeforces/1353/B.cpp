#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   int a[n],b[n];
   fr(i,n)
   cin>>a[i];
   fr(i,n)
   cin>>b[i];
   sort(a,a+n);
   sort(b,b+n,greater<int>());
   int i=0;
   while(k--)
   {
      if(a[i]>b[i])
      break;
      else
      {
         a[i]=b[i];
         i++;
      }
   }
   cout<<accumulate(a,a+n,0)<<"\n";
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