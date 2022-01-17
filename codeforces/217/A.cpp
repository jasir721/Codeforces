#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int vis[101],x[101],y[101],n;
void dfs(int k)
{
    vis[k]=1;
    for(int i=1;i<=n;i++)
    {
        if((x[i]==x[k]||y[i]==y[k]) and (!vis[i]))
        dfs(i);
    }
}

void solve()
{   
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        vis[i]=0;
    }
    int ans=0;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans++;
        }
    }
    cout<<ans-1<<"\n";
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