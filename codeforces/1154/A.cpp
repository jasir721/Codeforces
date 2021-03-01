#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int a[4];
   fr(i,4)
   cin>>a[i];
   sort(a,a+4);
   cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2];
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}