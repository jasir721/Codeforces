#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m;
   cin>>n>>m;
   int f=n;
   int A[18][1<<n];
   n=1<<n;
   fr(i,n)
   {
       cin>>A[0][i];
   }
   int k=n/2,x=0,row=0;
   while(k>0)
   {
       row++;
       for(int i=0;i<k;i++)
       {
           if(x==0)
           {
               A[row][i]=(A[row-1][2*i]|A[row-1][(2*i)+1]);
           }
           else
           {
               A[row][i]=(A[row-1][2*i]^A[row-1][(2*i)+1]);
           }
        //    cout<<A[row][i]<<" ";
       }
    //    cout<<"\n";
       x^=1;
       k/=2;
   }
   fr(j,m)
   {
       int p,b;
       cin>>p>>b;
       p--;
       k=n/2,x=0,row=0;
       A[row][p]=b;
       p/=2;
       while(k>0)
       {
           row++;
           if(x==0)
           {
               A[row][p]=(A[row-1][2*p]|A[row-1][(2*p)+1]);
           }
           else
           {
               A[row][p]=(A[row-1][2*p]^A[row-1][(2*p)+1]);
           }
        //    cout<<row<<" "<<p<<" "<<A[row][p]<<"\t";
           x^=1;
           k/=2;
           p/=2;
       }
       cout<<A[f][0]<<"\n";
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