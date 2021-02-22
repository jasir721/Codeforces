#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a[n];
   int c=0,d=0;
   fr(i,n)
   {
       cin>>a[i];
       if(a[i]==1)
       c++;
       else
       d++;
   }
   if((d%2==0&&(c%2==0))||(d%2!=0&&c%2==0&&c!=0))
   cout<<"YES\n";
   else 
   cout<<"NO\n";
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