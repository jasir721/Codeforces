#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   

    ll n, k, result = 0;
    cin >> n >> k;
    vector<ll> vec(n);
 
    for(ll &ele: vec)
        cin >> ele;
 
    ll j = 0;
    for(ll i = 0; i < n; i++)
    { 
        while(j < n && vec[j] - vec[i] <= k) 
          j++;
        j--;
        ll total = (j - i);
        result += ((total * (total - 1)) >> 1);
    }
    cout << result << endl;
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