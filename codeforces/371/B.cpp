#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int a,b;
   cin>>a>>b;
   int xa=0,xb=0,xc=0;
   while(a%2==0 and a>0)
   {
       xa++,a/=2;
   }
   while(a%3==0 and a>0)
   {
       xb++,a/=3;
   }
   while(a%5==0 and a>0)
   {
       xc++,a/=5;
   }
   int ya=0,yb=0,yc=0;
   while(b%2==0 and b>0)
   {
       ya++,b/=2;
   }
   while(b%3==0 and b>0)
   {
       yb++,b/=3;
   }
   while(b%5==0 and b>0)
   {
       yc++,b/=5;
   }
//    cout<<a<<" "<<b<<"\n";
   if(a!=b)
   {
       cout<<"-1\n";
       return;
   }
   cout<<abs(xa-ya)+abs(xb-yb)+abs(xc-yc);
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