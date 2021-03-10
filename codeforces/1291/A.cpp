#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   string s;
   cin>>s;
   int o=0,e=0;
   fr(i,n)
   {
      if(((int)s[i]-'0')%2==0)
      e++;
      else
      o++;
   }
   if(o>1)
   {
      int k=0;
      fr(i,n)
      {
         if(((int)s[i]-'0')%2!=0)
         {
         cout<<s[i];
         k++;
         }
         if(k==2)
         {
            cout<<"\n";
            return;
         }
      }
      cout<<"\n";
         return;
   }
   else
   {
      cout<<"-1\n";
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