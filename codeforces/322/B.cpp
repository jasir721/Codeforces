#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll a[3],mx=0;
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    for(int i=0;i<3;i++){
        if(a[0]-i<0)
            break;
        mx = max(mx, (a[0]-i)/3 + (a[1]-i)/3 + (a[2]-i)/3 + i);
    }
    cout<<mx;
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