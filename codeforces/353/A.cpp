#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   ll A=0,B=0;
   bool flag=false;
   fr(i,n)
   {
       int x,y;
       cin>>x>>y;
       A+=x;
       B+=y;
       if((x%2 and y%2==0) || (x%2==0 and y%2))
       flag=true;
   }
   if(A%2==0 and B%2==0)
   {
       cout<<0<<"\n";
   }
   else if(A%2 and B%2 and flag)
   {
       cout<<1<<"\n";
   }
   else
   {
       cout<<"-1"<<"\n";
   }
   return;
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