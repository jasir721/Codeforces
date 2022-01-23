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
void solve()
{
    int n, k, counter = 0;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 2; i < n; i += 3)
        if (5 - arr[i] >= k)
            counter++;

    cout << counter << "\n";
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