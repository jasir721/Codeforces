#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define pb push_back
#define fr(i,n) for(i=0;i<n;i++)
#define frl(i,n) for(i=n-1;i>=0;i--)
#define si set<int>
int gcd(int a,int b) 
{ 
	if (a == 0) 
	return b; 
	return gcd(b%a, a);
}

int solve()
{
      string s;
      cin>>s;
      ll n=s.length(),i,k=0,j=0,ctr=0;
      fr(i,n)
      {
            if(s[i]=='1')
            {
                  k=i;
                  break;
            }
            
            
      }
      for(i=n-1;i>=0;i--)
      {
            if(s[i]=='1')
            {
                  j=i;
                  break;
                  
            }
      }
      for(i=k;i<j;i++)
      if(s[i]=='0')
      ctr++;
      cout<<ctr<<endl;
      return 0;
}

int main()
{
    fs 
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}