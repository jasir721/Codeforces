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
   int k=1;
   int minute=0;
   while (k)
   {
      k=0;
      fr(i,n-1)
      {
         if(s[i]=='A'&&s[i+1]=='P')
         {
            s[i+1]='A';
            k++;
            i++;
         }
      }
      if(k!=0)
      minute++;
   }
   cout<<minute<<"\n";
   
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