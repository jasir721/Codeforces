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
    ll i,t,j,ctr=0;
    cin>>t;
    while(t--)
    {
        ll n;
        ctr=1;
        cin>>n;
        if(sqrt(n)-(int)sqrt(n)>0||n==1)
        cout<<"NO"<<endl;
        else
        {
            ll k=sqrt(n);
            for(i=2;i*i<=k;i++)
            if(n%i==0)
            {
                ctr=0;
                break;
            }
            if(ctr==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
            
        
    }

    return 0;
}