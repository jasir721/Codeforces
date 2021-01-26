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
    int n,k=0;
    cin>>n;
    map<int,int>m;
    int a[n];
    fr(i,n)
    {
        cin>>a[i];
        if(m[a[i]]==0)
        {
            k++;
            m[a[i]]++;
        }
        else 
        {
            if(m[a[i]+1]==0)
            {
                k++;
                m[a[i]+1]++;
            }
        }
    }
    cout<<k<<endl;

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