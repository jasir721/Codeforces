#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   ll tot=0;
   for(int i=0;i<n;i++)
   {
        int a, b;
        cin >> a >> b;
        if (tot+a <= 500) {
            tot += a;
            cout << "A";
        } else {
            tot -= b;
            cout << "G";
        }
   }
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