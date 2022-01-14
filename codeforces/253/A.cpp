#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m;
   cin>>n>>m;
   string s="";
   if(n>m)
   {
       string t="BG";
       while(m>0)
       {
           cout<<t;
           m--,n--;
       }
       while(n>0)
       {
           cout<<"B";
           n--;
       }
   }
   else if(n<m)
   {
       string t="GB";
       while(n>0)
       {
           cout<<t;
           m--,n--;
       }
       while(m>0)
       {
           cout<<"G";
           m--;
       }
   }
   else
   {
    //    string t="GB";
       while(n>0)
       {
           cout<<"GB";
           n--;
       }
   }
//    cout<<s<<"\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
//    int t;
//    cin>>t;
//    while(t--)
      solve();
   return 0;    
}