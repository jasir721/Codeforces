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
   int a[4],sum=0;
   string s;
   fr(i,4)
   cin>>a[i];
   cin>>s;
   int k=s.length();
   fr(i,k)
   {
      switch(s[i])
      {
         case '1':sum+=a[0];
         break;
         case '2':sum+=a[1];
         break;
         case '3':sum+=a[2];
         break;
         case '4':sum+=a[3];
      }
   }
   cout<<sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}