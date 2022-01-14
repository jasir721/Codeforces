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
    int x,y,n,k;
    cin>>y>>k>>n;
 
    x=k-y%k;
    
    bool f=true;
    while(x+y<=n)
    {
        if((x+y)%k==0)
        {
            cout<<x<<" ",f=false;
            x+=k;
        }
        else
        x++;
    }
    if(f)
    cout<<-1;
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