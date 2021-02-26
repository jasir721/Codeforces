#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int pyramid(int n)
{
    if(n<2)
    return 0;
    int sum=0;
    int prevsum=0;
    for(int i=2;;i+=3)
    {
        sum+=i;
        if(sum>n)
        {
            return 1+pyramid(n-prevsum);
        }
        prevsum=sum;
    }
}
void solve()
{   
   int n;
   cin>>n;
   cout<<pyramid(n)<<"\n";
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