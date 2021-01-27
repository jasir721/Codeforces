#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int maxi(int a[],int n)
{
   int max=a[0],j=0;
   for(int i=1;i<n;i++)
   {
      if(a[i]>max)
      {
         max=a[i];
         j=i;
      }
   }
   return j;
}
int mini(int a[],int n)
{
   int min=a[0],j=0;
   for(int i=1;i<n;i++)
   {
      if(a[i]<min)
      {
         min=a[i];
         j=i;
      }
   }
   return j;
}
/*********************************************************************************************************************/
int sumn(int n)
{
   return n*(n+1)/2;
}
void solve()
{   
   int n,sum=0,h=0;
   cin>>n;
   if(n==1)
   {
      cout<<1;
      return;
   }
   for(int i=1;i<=n+1;i++)
   {
      if(sum<=n)
      {
         sum+=sumn(i);
         h++;
      }
      else
      {
      cout<<h-1;
      return;
      }
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}