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
        ll a,b,c,k=1;
        cin>>a>>b>>c;
        ll ctr=0;
        while(a%2==0)
        {
            a/=2;
            k*=2;
        }
        while(b%2==0)
        {
            b/=2;
            k*=2;
        }
        if(k>=c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}