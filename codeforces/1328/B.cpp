#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
   string s;
   fr(i,n)
   s+='a';
   int sum=0,index=0,sum2=0;
   fr(i,n)
   {
      sum+=i;
      if(sum>=k)
      {
         index=i;
         break;
      }
      sum2=sum;
   }
   // cout<<sum<<" "<<index<<" ";
   int index2=k-sum2-1;
   // cout<<index2<<"\n";
   s[n-index-1]='b';
   s[n-index2-1]='b';
   cout<<s<<"\n";
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