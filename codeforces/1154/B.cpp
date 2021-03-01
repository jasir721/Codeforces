#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n;
   cin>>n;
   int a[n];
   set<int>s;
   fr(i,n)
   {
      cin>>a[i];
      s.insert(a[i]);
   }
   auto it=s.begin();

   auto itr=s.begin();
   // cout<<*it-*s.begin()<<"\n";
   // cout<<*s.end()<<"\n";
   if(s.size()>3)
   cout<<-1;
   else if(s.size()==3)
   {
      it++;
      itr++;
      itr++;
      if(*it-*s.begin()==*itr-*it)
      cout<<*it-*s.begin();
      else
      cout<<-1;
   }
   else if(s.size()==2)
   {
      it++;
      if((*it%2&&*s.begin()%2)||(*it%2==0&&*s.begin()%2==0))
      cout<<((*it+*s.begin())/2)-*s.begin();
      else
   cout<<*it-*s.begin();
   }
   else 
   cout<<0;
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t;
   // cin>>t;
   // while(t--)
      solve();
   return 0;    
}