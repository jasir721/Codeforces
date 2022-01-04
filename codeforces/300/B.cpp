#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void dfs(int start,map<int,bool>&vis,vector<vector<int>>&adj,vector<int>&v)
{
    vis[start]=true;
    v.push_back(start);
    for(auto it:adj[start])
    {
        if(vis[it]==false)
        {
            dfs(it,vis,adj,v);
        }
    }
    return;
}
void solve()
{   
   int n,m;
   cin>>n>>m;
   map<int,bool>vis;
   vector<bool>visited(n+1,false);
   vector<vector<int>>ans;
   vector<vector<int>>adj(n+1,vector<int>());
   for(int i=0;i<m;i++)
   {
       int x,y;
       cin>>x>>y;
       visited[x]=visited[y]=true;
       adj[x].push_back(y);
       adj[y].push_back(x);
       vis[x]=false,vis[y]=false;
   }
   for(auto it:vis)
   {
       vector<int>v;
       if(it.second==false)
       dfs(it.first,vis,adj,v);
       if(v.size()>3)
       {
           cout<<"-1\n";
           return;
       }
       if(v.size()!=0)
       ans.push_back(v);
   }
   int i=1;
   vector<vector<int>>sol;
   for(auto it:ans)
   {
       while(it.size()!=3 and i<=n)
       {
        //    cout<<1<<" ";
            // cout<<i<<" "<<visited[i]<<"\n";
           if(visited[i]==false)
           {
               visited[i]=true;
               it.push_back(i);
            //    i++;
           }
           i++;
       }
       sol.push_back(it);
   }
   vector<int>v;
   for(i=1;i<=n;i++)
   {
       if(visited[i]==false)
       v.push_back(i);
       if(v.size()==3)
       {
           sol.push_back(v);
           v.clear();
       }
   }
   for(auto it:sol)
   {
    //    for(int j=0;j<3;j++)
    //    {
    //        cout<<it[j]<<" ";
    //    }
    //    cout<<"\n";
    // cout<<it.size()<<"\n";
       if(it.size()!=3)
       {
    //    for(int j=0;j<it.size();j++)
    //    {
    //        cout<<it[j]<<" ";
    //    }
    //    cout<<"\n";
           cout<<"-1\n";
           return;
       }
   }
   for(auto it:sol)
   {
       for(int j=0;j<3;j++)
       {
           cout<<it[j]<<" ";
       }
       cout<<"\n";
   }
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