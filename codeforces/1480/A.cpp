#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   string s;
   cin>>s;
   int k=s.size();
   for(int i=0;i<k;i++)
   {
       if(i%2==0)
       {
           if(s[i]=='a')
           cout<<"b";
           else
           cout<<"a";
       }
       else
       {
           if(s[i]=='z')
           cout<<"y";
           else
           cout<<"z";
       }
   }
   cout<<"\n";
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