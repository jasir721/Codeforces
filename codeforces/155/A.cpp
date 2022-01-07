#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    ll maxi = x, mini = x;
    ll c = 0;
    for(int i=1;i<n;i++) {
        cin >> x;
        if (x > maxi) {
            maxi = x;
            c++;
        }
        else if (x < mini) {
            mini = x;
            c++;
        }
    }
    cout << c;
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