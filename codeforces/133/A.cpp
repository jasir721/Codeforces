#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s;
    cin>>s;
    // int h=0,q=0,n=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='Q' || s[i]=='H' || s[i]=='9')
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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