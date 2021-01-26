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
    ll i,t,j,n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        fr(i,n/2)
        cout<<2<< " ";
    }
    else
    {
        cout<<n/2<<endl;
        fr(i,(n-3)/2)
        cout<<2<<" ";
        cout<<3;
    }
    cout<<endl;
    
    
    return 0;
}