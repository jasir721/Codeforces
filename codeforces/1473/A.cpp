#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    int n,d,j=0;
    cin>>n>>d;
    int a[n];
    fr(i,n)
    {
        cin>>a[i];
        if(a[i]<=d)
        j++;
    }
    sort(a,a+n);
    if(a[0]+a[1]<=d||j==n)
    cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    
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