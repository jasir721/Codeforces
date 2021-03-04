#include<algorithm>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long m,n;
		scanf("%lld %lld",&m,&n);
		n=min(m,n);
		long long ans=0;
		if(n==m)
		{
			printf("%lld\n",(1+n-1)*(n-1)/2+1);
		}
		else
		{
			printf("%lld\n",(1+n)*n/2);
		}
	}
}