#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define pb push_back
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
      ll n,ctr=0;
      string s;
      ctr=0;
      cin>>n;
       ll a[26]={0};
      fr(i,n)
      {
            cin>>s;
            fr(j,s.length())
            {
                 a[(int)s[j]-97]++; 
            }
      }
      fr(i,26)
      {
      if(a[i]%n!=0)
      ctr=1;
      //cout<<a[i]<<"\t";
      }      
      if(ctr)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
    }

    return 0;
}