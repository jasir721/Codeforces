#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
ll gcd(ll a, ll b)
{
   if (a == 0)
      return b;
   return gcd(b % a, a);
}
void solve()
{
   ll n;
   cin >> n;
   ll a[n], b[n];
   fr(i, n)
           cin >>
       a[i];
   fr(i, n)
           cin >>
       b[i];
   ll k = *min_element(a, a + n);
   ll m = *min_element(b, b + n);
   ll i = 0, count = 0;
   while (i < n)
   {
      if (a[i] > k && b[i] > m)
      {
         ll f = min(a[i] - k, b[i] - m);
         if (f == a[i] - k)
         {

            count += (a[i] - k);
            b[i] -= (a[i]-k);
            a[i] = k;
            
         }
         else
         {

            count += (b[i] - m);
            a[i] -= (b[i]-m);
            b[i] = m;
            
         }
      }
      else if (a[i] > k)
      {

         count += (a[i] - k);
         a[i] = k;
      }
      else if (b[i] > m)
      {
         count += (b[i] - m);
         b[i] = m;
      }
      else
      {
         i++;
      }
      // cout << i<<"\t"<<count << "\t";
   }
   cout << count << "\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}