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
   int k = 0;
   while ((1 << (k + 1)) <= n - 1)
      k++;

   for (int i = (1 << k) - 1; i >= 0; i--)
      cout << i << ' ';

   for (int i = (1 << k); i < n; i++)
      cout << i << ' ';
   cout << '\n';
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   solve();
   return 0;
}