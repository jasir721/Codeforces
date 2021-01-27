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
    int n;
    cin>>n;
    int j=n+1;
    if(n%2==0)
    {
       for(int i=n;i>=1;i--)
       cout<<i<<" ";
       cout<<"\n";
    }
    else
   {
      for(int i=n;i>(n/2)+1;i--)
       cout<<i<<" ";
       for(int i=1;i<=(n/2)+1;i++)
       cout<<i<<" ";
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