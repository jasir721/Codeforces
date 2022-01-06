#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   string s;
   cin>>s;
   string ans="";
   if(s.length()<=2)
   {
       cout<<s<<"\n";
       return;
   }
   ans+=s[0],ans+=s[1];
   int i=2;
   if(i<s.length() and (s[i]!=s[i-1] || s[i]!=s[i-2]))
   {
       ans+=s[i];
   }
   i++;
   for(;i<s.length();i++)
   {
       int k=ans.length()-1;
       if(s[i]==ans[k] and s[i]==ans[k-1])
       {
           continue;
       }
       else if(s[i]==ans[k] and ans[k-1]==ans[k-2])
       {
           continue;
       }
       else 
       {
           ans+=s[i];
       }
   }
   cout<<ans<<"\n";
   return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
      solve();
   return 0;    
}