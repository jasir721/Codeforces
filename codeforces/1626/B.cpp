#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    for(ll i = n-2 ; i >= 0 ; i--) {
        ll x = (s[i] - '0');
        ll y = (s[i+1] - '0');
        if(x + y >= 10) {
            ll sum = x + y;
            for(ll j = 0 ; j < n; j++) {
                if(j == i){
                    cout << sum / 10;
                }
                else if(j == (i+1)) {
                    cout << (sum % 10);
                }
                else {
                    cout << s[j];
                }
            }
            cout << "\n";
            return;
        }
    }    
    for(ll i = 1; i < n; i++) {
        ll x = (s[i] - '0');
        ll y = (s[i-1] - '0');
        ll d = (x + y) / 10;
        if(d > y) {
            for(ll j = 0 ; j < n; j++) {
                if(j == i) {
                    cout << x+y;
                }
                else if(j == i+1)
                    continue;
                else cout << s[j];
            }
            cout << "\n";
            return;
        }
    }
    ll x = (s[0] - '0');
    ll y = (s[1] - '0');
    cout << x + y ;
    for(ll j = 2; j < n; j++)
        cout << s[j];
    cout << "\n";
 }
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}