#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,k;
   cin>>n>>k;
//    int count=0;
   if(n%2==0)
   {
       if(k>n/2)
       {
           cout<<-1<<"\n";
           return;
       }
    //    count=n/2;
   }
   else if(n%2==1)
   {
       if(k>(n/2)+1)
       {
           cout<<-1<<"\n";
           return;
       }
   }
   vector<vector<char>>ans(n,vector<char>(n,'.'));
   for(int i=0,j=0;i<k;i++)
   {
       ans[j][j]='R';
       j+=2;
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<ans[i][j];
       }
       cout<<"\n";
   }
   return;
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