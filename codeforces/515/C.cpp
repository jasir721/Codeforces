#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   ll s;
   cin>>s;
   vector<int>v;
   while(s!=0)
   {
      int x=s%10;
      if(x==3||x==2||x==5||x==7)
      v.push_back(x);
      else if(x==4)
      {
         v.push_back(2);
         v.push_back(2);
         v.push_back(3);
      }
      else if(x==6)
      {
         v.push_back(3);
         v.push_back(5);
      }
      else if(x==8)
      {
         v.push_back(2);
         v.push_back(2);
         v.push_back(2);
         v.push_back(7);
      }
      else if(x==9)
      {
         v.push_back(3);
         v.push_back(3);
         v.push_back(7);
         v.push_back(2);
      }
      s/=10;
   }
   sort(v.begin(), v.end(), greater<int>());
   for (int i = 0; i < v.size(); i++) 
        cout << v[i]; 
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
      solve();
   return 0;    
}