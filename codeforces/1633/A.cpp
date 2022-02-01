#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    int n;
    cin>>n;
    if(n%7==0)
    {
        cout<<n<<endl;
    }
    else
    {
        int temp=(n/10)*10;
        for(int i=temp;i<temp+10;i++)
        {
            if(i%7==0)
            {
                cout<<i<<endl;
                break;
            }
        }
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