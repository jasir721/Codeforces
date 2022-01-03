#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin >> n;
   int i, x[n];
   for (i = 0; i < n; i++)
      cin >> x[i];
   for (i = 0; i < n - 1; i++)
   {
 
      for (int j = 0; j < n - 1; j++)
         if (max(x[i], x[i + 1]) < max(x[j], x[j + 1]) && min(x[i], x[i + 1]) < min(x[j], x[j + 1]) && max(x[i], x[i + 1]) > min(x[j], x[j + 1]))
         {
            cout << "yes";
            return ;
         }
   }
   cout << "no";
   return ;
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