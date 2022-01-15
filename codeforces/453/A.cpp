#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
double n,m,ans;
double qpow(double a,int b){
    double cnt =1.0;
    while(b){
        if(b&1) cnt*=a;
        a*=a;
        b>>=1;
    }
    return cnt;
}
void solve()
{   
    // db m,n;
	scanf("%lf%lf",&m,&n);
	for(int i=1;i<=m;i++){
		ans+=1.0*i*(qpow(1.0*i/m,n)-qpow(1.0*(i-1)/m,n));
	}
	printf("%.12lf",ans);
	return ;
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