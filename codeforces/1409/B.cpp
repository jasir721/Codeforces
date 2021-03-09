#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
using namespace std;
int main()
{
    fast;
    long long t,a,b,ans1=0,ans2=0,x,y,n,a1,b1,n1;
    cin>>t;
    while(t--)
    {
        ans1=0;
        ans2=0;
        cin>>a>>b>>x>>y>>n;
        a1=a;
        b1=b;  n1=n;
        if((a1-n1)>=x)
        {
            a1=a1-n1;
        }
        else if((a1-n1)<x)
        {
            int d=a1-x;
            a1=x;
            n1=n1-d;
            if((b1-n1)>=y)
            {
                b1=b1-n1;
            }else
            {
                int k=b1-y;
                b1=y;
                n1=n1-k;
            }
        }
        ans1=a1*b1;
        // cout<<ans1<<" ";
        a1=a;b1=b;n1=n;
        if((b1-n1)>=y)
        {
            b1=b1-n1;
        }
        else if((b1-n1)<y)
        {
            int d=b1-y;
            b1=y;
            n1=n1-d;
            if((a1-n1)>=x)
            {
                a1=a1-n1;
            }
            else
            {
                int k=a1-x;
                a1=x;
                n1=n1-k;
            }
        }
        ans2=a1*b1;
        
        if(ans1>ans2)
        cout<<ans2<<endl;
        else
        cout<<ans1<<endl;
    }
    return 0;
}