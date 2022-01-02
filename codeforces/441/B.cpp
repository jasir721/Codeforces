#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m;
   cin>>n>>m;
   int k=3005;
   vector<int>A(k,0),B(k,0);
   for(int i=0;i<n;i++)
   {
       int x,y;
       cin>>x>>y;
       A[x]+=y;
   }
   ll count=0;
   for(int i=0;i<k-1;i++)
   {
    //    if(i<4)
    //    cout<<count<<"\n";
       if(A[i]-(m-B[i])>0)
       {
           B[i+1]=min(m,A[i]-(m-B[i]));
       }
       B[i]=min(m,A[i]+B[i]);
       count+=B[i];
   }
   cout<<count<<"\n";
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