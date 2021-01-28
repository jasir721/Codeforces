#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fs                           \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL);
#define mod 1000000007
#define fr(i, n) for (i = 0; i < n; i++)
#define frl(i, n) for (i = n; i > 0; i--)
int gcd(int a, int b)
{
   if (a == 0)
      return b;
   return gcd(b % a, a);
}

int main()
{
   fs
       ll i,
       t, j;
   cin >> t;
   while (t--)
   {
      ll q, d, n, ctr = 0;
      cin >> n >> d;
      ll a[n];
      fr(i, n)
              cin >>
          a[i];
      fr(i, n)
      {
         ctr = 0;
         ll b = a[i];
         if (a[i] % d == 0)
            ctr = 1;
         while (b != 0 && ctr == 0)
         {
            ll p = b % 10;
            if (p == d)
               ctr = 1;
            b /= 10;
         }
         if (ctr == 0)
         {
            ll h = d;
            while (ctr == 0)
            {

               ll r = a[i] - h;
               if (r <= 0)
                  break;
               ll k = r;
               if (r % d == 0)
                  ctr = 1;
               else
               {
                  while (k != 0 && ctr == 0)
                  {
                     ll f = k % 10;
                     if (f == d)
                        ctr = 1;
                     k /= 10;
                  }
               }
               h += 10;
            }
         }
         if (a[i] < d)
            ctr = 0;
         if (ctr == 1)
            cout << "YES" << endl;
         else
            cout << "NO" << endl;
      }
   }

   return 0;
}