#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   char a[3]={'a','b','c'};
   int j=0;
   if(k==1)
   {
      while(n--)
      {
         cout<<a[j];
         if(j==2)
         j=0;
         else
         j++;
      }
      cout<<"\n";
   }
   else
   {
      cout<<'a';
      fr(i,k-2)
      cout<<'b';
      cout<<'a';
      n-=k;
      j=1;
      while(n--)
      {
         cout<<a[j];
         if(j==2)
         j=0;
         else
         j++;
      }
      cout<<"\n";
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