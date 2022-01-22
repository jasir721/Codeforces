#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll a,b,k;
   cin>>a>>b>>k;
   if(a==1 and b==1)
   {
       cout<<"NO\n";
       return;
   }
    if(a==b )
    {
        cout<<"YES\n";
        return;
    }
    if(a%2==0 and b%2==0)
    {
        if((b-a)/2<=k)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        return;
    }
    if((b-a)/2+1<=k)
    {
        cout<<"YES\n";
    }
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