#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(ll i=0;i<n;i++)
ll gcd(ll a,ll b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   ll a,b,c;
   cin>>a>>b>>c;
   ll ctr[7]={0};
   ll i;
   ll w=min(a/3,min(b/2,c/2));
  a-=w*3;
  b-=w*2;
  c-=w*2;
   ll a1[7],b1[7],c1[7];
   fr(j,7)
   {
      a1[j]=a;
      b1[j]=b;
      c1[j]=c;
   }
   fr(j,7)
   {
      i=j+1;
   while(a1[j]>=0&b1[j]>=0&&c1[j]>=0)
   {
      if(i==1||i==4||i==7)
      {if(a1[j]!=0)
      a1[j]--;
      else 
      break;
      }
      else if(i==2||i==6)
      {if(b1[j]!=0)
      b1[j]--;
      else 
      break;
      }
      else
      {if(c1[j]!=0)
      c1[j]--;
      else 
      break;}
      ctr[j]++;
      // cout<<a<<" "<<b<<" "<<c<<" "<<ctr<<"\n";
      // cout<<ctr<<"\n";
      if(i==7)
      i=1;
      else 
      i++;
   }
   }
   // fr(j,7)
   // cout<<ctr[j]<<"\t";
   cout<<(w*7)+(*max_element(ctr,ctr+7));

}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}