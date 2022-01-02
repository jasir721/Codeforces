#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int ans=0;
   int A[n],B[n];
   fr(i,n) cin>>A[i]>>B[i];
   for(int i=0;i<n;i++)
   {
       int count=0;
       for(int j=0;j<n;j++)
        {
            if(A[i]==B[j] and i!=j)
            count++;
        }
        if(count==0)
        ans++;
   }
   cout<<ans<<"\n";
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