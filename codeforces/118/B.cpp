#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int m=n,j=0;
   for(int i=0;i<=n;i++)
   {
       for(int k=0;k<m;k++)
       cout<<"  ";
       m--;
       for(j=0;j<i;j++)
        cout<<j<<" ";
        cout<<j;
        for(j=j-1;j>=0;j--)
        cout<<" "<<j;
        cout<<"\n";
   }
   m=1;
   int f=n-1;
    for(int i=0;i<=n;i++)
   {
       for(int k=m;k>0;k--)
       cout<<"  ";
       m++;
       for(j=0;j<f;j++)
        cout<<j<<" ";
        if(f>=0)
        cout<<f;
        f--;
        for(j=j-1;j>=0;j--)
        cout<<" "<<j;
        cout<<"\n";
   }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}