#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define pb push_back
#define fr(i,n) for(i=0;i<n;i++)
#define frl(i,n) for(i=n;i>0;i--)
#define si set<int>
int gcd(int a,int b) 
{ 
	if (a == 0) 
	return b; 
	return gcd(b%a, a);
}

void solve()
{ 
	ll i,j,n;
	ll a,b,p,k;
	cin>>a>>n;
	vector<int> v;
	n-=1;
	while(n--)
	{
	    p=a;
	    
	    while(p>0)
	    {
	        k=p%10;
	        //if(k!=0)
	        v.pb(k);
	        p/=10;
	    }
	     sort(v.begin(), v.end()); ;
	     ll m=v.size();
	     a+=v[0]*v[m-1];
	     if(v[0]*v[m-1]==0)
	     {
	         cout<<a<<endl;
	         return;
	     }
	     v.clear();
	     //cout<<a<<endl;
	}
	cout<<a<<endl;
	
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