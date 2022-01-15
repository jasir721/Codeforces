#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
bool cmp(pair<int,int>A,pair<int,int>B)
{
    if(A.first>B.first)
    {
        return true;
    }
    else if(A.first<B.first)
    {
        return false;
    }
    else if(A.first==B.first and A.second<B.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{   
   int n,k;
   cin>>n>>k;
   vector<pair<int,int>>A;
   fr(i,n)
   {
       int x,y;
       cin>>x>>y;
       A.push_back({x,y});
   }
   sort(A.begin(),A.end(),cmp);
   int flag=0;
   map<int,int>m;
   int count=0, px=A[0].first,py=A[0].second,rank=1;
   fr(i,n)
   {
    //    cout<<A[i].first<<" "<<A[i].second<<"\n"
        count=0;
        px=A[i].first,py=A[i].second;
        while(i<n and A[i].first==px and A[i].second==py)
        {
            if(i+1==k)
            {
                flag=rank;
            }
            count++;
            i++;
        }
        m[rank]=count;
        // cout<<m[rank]<<" "<<rank<<" "<<flag<<"\n";
        rank++;
        i--;
   }
   cout<<m[flag]<<"\n";
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