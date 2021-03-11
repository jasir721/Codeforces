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
   int n;
   cin >> n;
   vector<pair<int, int>> v;
   ll a[n];
   fr(i, n)
   {
      cin >> a[i];
      v.push_back(make_pair(a[i], i + 1));
   }
   sort(v.begin(), v.end());

   fr(i, n / 2)
   {
      cout << v[i].second << " " << v[n - 1 - i].second << endl;
   }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;
}