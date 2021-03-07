#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int a,b,c;
   int x,y,z;
   cin>>x>>y>>z;
   cin>>a>>b>>c;
  if(x>a)
    {
        cout<<"NO"<<endl;
        return ;
    }
    else if(x<=a)
    {
        a=a-x;
        x=0;
        if(y>(a+b))
        {
            cout<<"NO"<<endl;
            return ;
        }
        else if(y<=(a+b))
        {
            if(y<a)
            {
                a=a-y;
                y=0;
            }
            else if(y>=a)
            {
                y=y-a;
                a=0;
                b=b-y;
                y=0;
            }
            
            if(z>(a+b+c))
            {
                cout<<"NO"<<endl;
                return ;
            }
            else if(z<=(a+b+c))
            {
                cout<<"YES"<<endl;
            }
        }
        
    }


}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}