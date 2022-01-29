#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    double f;
    int arr[100],x,n,t=0;
    cin>>n;
    
    for (int i= 0; i<n; i++){
        cin>>arr[i];
        t+=arr[i];
    }
    
    f=t/(n*1.0);
    cout<<setprecision(14) << f;
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