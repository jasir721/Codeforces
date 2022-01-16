#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
	int n,p=0,q=0;
	cin>>n;
	while(n>=0)
        {
        if(n%7==0)
        {
            q=n/7;
            n=0;
            break;
        }
        p++;
        n=n-4;
        }
        if(n==0)
        {
        while(p--)
	cout<<"4";
	while(q--)
	cout<<"7";
        }
        else
        cout<<"-1";
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