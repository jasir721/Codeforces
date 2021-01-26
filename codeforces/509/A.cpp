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
    int a[n][n];
    fr(i,n)
    {
    a[0][i]=1;
    a[i][0]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n-1][n-1];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}