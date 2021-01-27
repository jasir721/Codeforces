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
void solve()
{   
   ll n;
   cin>>n;
   cout<<25;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}