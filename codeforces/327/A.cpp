#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int A[n];
   int count=0;
   fr(i,n)
   {
      cin>>A[i];
      count+=A[i];
      if(A[i]==0)
      A[i]=1;
      else
      A[i]=-1;
   }
   int global=A[0],local=A[0];
   for(int i=1;i<n;i++)
   {
      local=max(A[i],local+A[i]);
      global=max(local,global);
   }
   cout<<count+global<<"\n";
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