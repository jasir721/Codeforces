#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s;
    cin>>s;
    map<char,int>m;
    int n=s.length();
    fr(i,n)
    {
        m[s[i]]++;
    }
    int odd=0;
    for(auto it:m)
    {
        if(it.second%2)
        odd++;
    }
    if(odd==0 || odd==1||odd%2)
    {
        cout<<"First\n";
    }
    else if(odd%2==0)
    {
        cout<<"Second\n";
    }
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