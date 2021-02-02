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
   int p[n], c[n];
   fr(i, n)
           cin >>
       p[i] >> c[i];
   if (n == 1)
   {
      if (p[0] >= c[0])
         cout << "YES\n";
      else
         cout << "NO\n";
   }
   else
   {
      if (p[0] < c[0])
      {
         cout << "NO\n";
         return;
      }
      for (int i = 1; i < n; i++)
      {
         if ((p[i] - p[i - 1]) >= 0 && (c[i] - c[i - 1]) >= 0)
         {
            if (p[i] - p[i - 1] >= c[i] - c[i - 1])
               continue;
            else
               {cout << "NO\n";
            return;}
         }
         else
         {
            cout << "NO\n";
            return;
         }
      }
      cout << "YES\n";
   }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}