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
   int n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int a[3];
   a[0]=(k*l)/nl;
   a[1]=c*d;
   a[2]=p/np;
   sort(a,a+3);
   //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
   cout<<a[0]/n;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}