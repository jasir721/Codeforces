#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define fr(i,n) for(i=0;i<n;i++)
#define frl(i,n) for(i=n;i>0;i--)
int gcd(int a,int b) 
{ 
	if (a == 0) 
	return b; 
	return gcd(b%a, a);
}

int main()
{
    fs 
    ll i,t,j;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k[n+1]={0};
        n=n*2;
        ll a[n];
        fr(i,n)
        cin>>a[i];
        fr(i,n)
        {
            if(k[a[i]]==1)
            cout<<a[i]<<" ";
            else
            k[a[i]]++;
        }
        cout<<endl;
        
    }

    return 0;
}