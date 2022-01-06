#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
const int maxn=100005;
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void isprime(vector<bool>&prime)
{
    for(int i=2;i*i<maxn;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<maxn;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    return;
}
void solve()
{   
   int n,m;
   cin>>n>>m;
   int A[n][m];
   fr(i,n) fr(j,m)
   cin>>A[i][j];
   vector<bool>prime(maxn,true);
   isprime(prime);
   prime[1]=false;
   vector<int>nxt(maxn,0);
   int mx=INT_MAX;
   for(int i=maxn-1;i>=0;i--)
   {
       if(prime[i])
       {
           mx=i;
       }
       nxt[i]=mx;
   }
   fr(i,n) fr(j,m) 
   {
       A[i][j]=nxt[A[i][j]]-A[i][j];
   }
   ll mn=INT_MAX;
   fr(i,n)
   {
       ll ans=0;
       fr(j,m)
       {
           ans+=A[i][j];
       }
       mn=min(ans,mn);
   }
   fr(j,m)
   {
       ll ans=0;
       fr(i,n)
       {
           ans+=A[i][j];
       }
       mn=min(ans,mn);
   }
   cout<<mn<<"\n";
   return;
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