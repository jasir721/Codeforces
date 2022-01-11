#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n,m;
   cin>>n>>m;
   ll A[n];
   fr(i,n) cin>>A[i];
   vector<ll>B(n,0);
   fr(i,m)
   {
       int x,y;
       cin>>x>>y;
       B[x-1]++;
       if(y!=n)
       {
           B[y]--;
       }
   }
   for(int i=1;i<n;i++)
   {
       B[i]+=B[i-1];
   }
   sort(B.begin(),B.end());
   sort(A,A+n);
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=(A[i]*B[i]);
   }
   cout<<sum<<"\n";
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
