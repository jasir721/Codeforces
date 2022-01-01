#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (int i = 0; i < n; i++)
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int s(int n)
{
    int sum = 0;
    while (n > 0)
    {
        // sum *= 10;
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    // ll i = 0;
    vector<ll> ans;
    for (int i = 0; i <= 81; i++)
    {
        if (b * pow(i, a) + c > 0 && b * pow(i, a) + c <= 1e9)
        {
            ll cur = b * pow(i, a) + c;
            if (s(cur) == i)
            {
                ans.push_back(cur);
            }
        }
    }
    cout << ans.size() << "\n";
    if (ans.size() != 0)
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }
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