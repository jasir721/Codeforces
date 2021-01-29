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
int maxi(int a[], int n)
{
   int max = a[0], j = 0;
   for (int i = 1; i < n; i++)
   {
      if (a[i] > max)
      {
         max = a[i];
         j = i;
      }
   }
   return j;
}
int mini(int a[], int n)
{
   int min = a[0], j = 0;
   for (int i = 1; i < n; i++)
   {
      if (a[i] < min)
      {
         min = a[i];
         j = i;
      }
   }
   return j;
}
/*********************************************************************************************************************/
void solve()
{
   string s;
   cin >> s;
   int i = 0, k = 0, m = 0,x=0,y=0;
   int n = s.length();
   int j=n-1;
   while (i < n - 1)
   {
      if (m == 0 && s[i] == 'B')
      {
         if (s[i + 1] == 'A')
         {
            m = 1;
            i++;
         }
      }
      else if (k == 0 && s[i] == 'A')
      {
         if (s[i + 1] == 'B')
         {
            k = 1;
            i++;
         }
      }
      i++;
   }
      while (j>0)
   {
      if (y == 0 && s[j] == 'B')
      {
         if (s[j -1] == 'A')
         {
            y = 1;
            j--;
         }
      }
      else if (x == 0 && s[j] == 'A')
      {
         if (s[j - 1] == 'B')
         {
            x = 1;
            j--;
         }
      }
      //cout<<x<<" "<<y<<"\n";
      j--;
   }
   if ((k == 1 && m == 1)||(x==1&&y==1))
      cout << "YES\n";
   else
      cout << "NO\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   solve();
   return 0;
}