#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll n;
   cin>>n;
   ll A[n];
   ll count=0;
   ll mx=INT_MIN,mn=INT_MAX;
   fr(i,n)
   {
       cin>>A[i];
       mx=max(mx,A[i]);
       mn=min(mn,A[i]);
       if(A[i]==A[0])
       count++;
   }
//    if(count==n)
//    {
//        cout<<"0 0\n";
//        return;
//    }
//    sort(A,A+n);
   ll n1=0,n2=0;
   fr(i,n)
   {
       if(mx==A[i])
       n1++;
   }
   fr(i,n)
   {
       if(mn==A[i])
       n2++;
   }
   if(mn!=mx)
   cout<<mx-mn<<" "<<n1*n2<<"\n";
   else
   cout<<0<<" "<<(n1*(n1-1))/2<<"\n";
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