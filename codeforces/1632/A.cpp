#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(n==1)
   {
       cout<<"YES\n";
       return;
   }
   int count0=0,count1=0;
   fr(i,n)
   {
       if(s[i]=='0')
       count0++;
       else
       count1++;
   }
    if(count0>1 || count1>1)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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