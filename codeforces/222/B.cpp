#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m,k;
   cin>>n>>m>>k;
   int A[n][m];
   fr(i,n)fr(j,m) cin>>A[i][j];
   int row[n],col[m];
   fr(i,n) row[i]=i;
   fr(i,m) col[i]=i;
   fr(i,k)
   {
       char ch;
       cin>>ch;
       int r,c;
       cin>>r>>c;
       if(ch=='r')
       {
           swap(row[r-1],row[c-1]);
       }else if(ch=='c')
       {
           swap(col[r-1],col[c-1]);
       }
       else
        {
            cout<<A[row[r-1]][col[c-1]]<<"\n";
        }
   }
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