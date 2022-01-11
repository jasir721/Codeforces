#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int A[n];
   fr(i,n) cin>>A[i];
   vector<bool>B(n+1,false);
   for(int i=0;i<n;i++)
   {
       int x=A[i];
       if(x>=1 and x<=n and B[x]==false)
       {
           B[x]=true;
           continue;
       }
        else 
        {
            while(x>0)
            {
                x/=2;
                if(x>=1 and x<=n and B[x]==false)
                {
                    B[x]=true;
                    break;
                }
            }
        }
   }
   for(int i=1;i<=n;i++)
   {
       if(B[i]==false)
       {
           cout<<"NO\n";
           
           return;
       }
   }
   cout<<"YES\n";
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