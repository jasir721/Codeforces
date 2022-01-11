#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    ll a,b,c;
    cin>>a>>b>>c;
    if(b-a==c-b)
    {
        cout<<"YES\n";
        return;
    }
    // if(((a+c)%(2*b)==0))
    // cout<<1<<"\t";
    // else if((((2*b)-a)%c)==0)
    // cout<<2<<"\t";
    // else if( ((2*b)-c)%a==0)
    // cout<<3<<"\t";
    if(( (b!=0 and (a+c)%(2*b)==0 and (a+c)>0))|| (c!=0 and (((2*b)-a)%c)==0 and ((2*b)-a)>0) || (a!=0 and ((2*b)-c)%a==0 and ((2*b)-c)>0))
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