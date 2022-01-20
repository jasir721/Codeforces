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
   fr(i,n) cin>>A[i];
   sort(A,A+n);
   int j=0;
	for(int i=0;i<n;i++) 
 	if(A[i]>=2*A[j]) 
  	j++;
	cout<<n-min(n/2,j);
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