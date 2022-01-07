#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
ll book[100100];
void solve()
{   
    ll i,j,n,time,ans,sum;
    cin>>n>>time;

        for(i=0;i<n;i++)
        {
            cin>>book[i];
        }
        //sort(book,book+n);
        j=-1,sum=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(sum+book[i]<=time)
                sum+=book[i];
            else
            {
                sum+=book[i];
                while(sum>time)
                {
                    j++;
                    sum-=book[j];
                }
            }
            ans=max(ans,i-j);
        }
        cout<<ans<<endl;
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