#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    int n, b, arr[105];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        arr[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
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