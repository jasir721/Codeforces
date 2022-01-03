#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void fun(set<string>&ans,int start,string s)
{
    if(start==s.size()-1)
    {
        ans.insert(s);
        // v.push_back(A);
        return;
    }
    for(int i=start;i<s.size();i++)
    {
        swap(s[i],s[start]);
        fun(ans,start+1,s);
        swap(s[i],s[start]);
    }
    return;
}
void solve()
{   
   ll n;
   cin>>n;
   ll k=n;
   int count=0;
   if(n==1e9)
   {
       cout<<"4444477777\n";
       return;
   }
   while(k>0)
   {
       count++;
       k/=10;
   }
   if(count%2)
   count++;
   else
   count+=2;
   set<string>ans;
   string s="";
   for(int i=0;i<count;i++)
   {
       if(i<count/2)
       s+="4";
       else
       s+="7";
   }
//    cout<<s.substr(1,s.size()-2)<<"\n";
   fun(ans,0,s.substr(1,s.size()-2));
   ll sol=9999999999999;
    // string sol="999999999999";

    string nn=to_string(n);
    // cout<<nn<<"\n";
   for(auto it:ans)
   {
       if(stoll(it)>0 and stoll(it)>=n)
       sol=min(sol,(ll)stol(it));
    // cout<<it<<"\t";
    //    if(it>=nn and it<sol)
    //    sol=min(sol,it);
   }
   ans.clear();
   if(sol==9999999999999)
   {
   fun(ans,0,s);
   for(auto it:ans)
   {
       if(stoll(it)>0 and stoll(it)>=n)
       sol=min(sol,(ll)stoll(it));
    // cout<<it<<"\t";
    //    if(it>=nn and it<sol)
    //    sol=min(sol,it);
   }
   }
   cout<<sol<<"\n";
   return;
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