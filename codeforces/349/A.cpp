#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a=0,b=0,c=0;
   int A[n];
   fr(i,n) cin>>A[i];
   fr(i,n)
   {
       if(A[i]==25)
       {
           a++;
       }else if(A[i]==50)
       {
           b++;
           if(a>0)
           {
               a--;
           }
           else
           {
               cout<<"NO\n";
               return;
           }
       }
       else
       {
           if(b>0 and a>0)
           {
               b--,a--;
           }
           else if(b==0 and a>2)
           {
               a-=3;
           }
           else
           {
               cout<<"NO\n";
               return;
           }
       }
   }
   cout<<"YES\n";
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