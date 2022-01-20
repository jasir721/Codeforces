#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   int A[n];
   fr(i,n)
   cin>>A[i];
   int i=n-1,count=1;
   while(i>0 and A[i]-k<=A[i-1])
   count++,i--;
   cout<<count<<"\n";
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