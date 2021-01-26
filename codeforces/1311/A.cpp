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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        cout<<0<<endl;
        else if(a>b)
        {
            if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
        else
        {
            if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
            cout<<2<<endl;
            else
            cout<<1<<endl;
        }
    }

    return 0;
}