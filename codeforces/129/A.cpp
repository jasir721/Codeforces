#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
	int n; cin >> n;
	int odd_cnt = 0, even_cnt = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		sum += x;
		(x % 2 == 0) ? even_cnt++ : odd_cnt++;
	}
	(sum % 2 != 0) ? cout << odd_cnt : cout << even_cnt;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}