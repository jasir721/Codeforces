#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s;
    cin>>s;
    int n=s.length();
    map<int,int>m;
    int k;
    cin>>k;
    m[0]=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            m[i]=1+m[i-1];
        }
        else
        {
             m[i]=m[i-1];
        }
    }
    fr(i,k)
    {
        int x,y;
        cin>>x>>y;
        cout<<m[y-1]-m[x-1]<<"\n";
    }
    return;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
      solve();
   return 0;    
}