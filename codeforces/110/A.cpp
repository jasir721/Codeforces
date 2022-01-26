#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   string s;
   cin>>s;
   int n=s.length();
   int count=0;
   fr(i,n)
   {
       if(s[i]=='4'||s[i]=='7')
       {
           count++;
       }
   }
   if(count==4 || count==7)
   {
       cout<<"YES\n";
   }
   else 
   {
       cout<<"NO\n";
   }
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t;
   // cin>>t;
   // while(t--)
      solve();
   return 0;    
}