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
    int n,k=0,m=0;
    cin>>n;
    int a[n];
    fr(i,n)
    cin>>a[i];
    for(int i=0,j=n-1,t=0;;t++)
    {
      if(i==j)
      {
      if(t%2==0)
      k+=a[i];
      else
      m+=a[i];
      break;
      }
      if(t%2==0)
      {
         if(a[i]>a[j])
         {
            k+=a[i];
            i++;
         }
         else
         {
            k+=a[j];
            j--;
         }
      }
      else
      {
         if(a[i]>a[j])
         {
            m+=a[i];
            i++;
         }
         else
         {
            m+=a[j];
            j--;
         }
      }
    }
    cout<<k<<" "<<m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}