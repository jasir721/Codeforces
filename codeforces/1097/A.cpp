#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int maxi(int a[],int n)
{
   int max=a[0],j=0;
   for(int i=1;i<n;i++)
   {
      if(a[i]>max)
      {
         max=a[i];
         j=i;
      }
   }
   return j;
}
int mini(int a[],int n)
{
   int min=a[0],j=0;
   for(int i=1;i<n;i++)
   {
      if(a[i]<min)
      {
         min=a[i];
         j=i;
      }
   }
   return j;
}
/*********************************************************************************************************************/
void solve()
{   
   string s,s1,s2,s3,s4,s5;
   cin>>s>>s1>>s2>>s3>>s4>>s5;
   if(s[0]==s1[0]||s[0]==s2[0]||s[0]==s3[0]||s[0]==s4[0]||s[0]==s5[0])
   {
      cout<<"YES\n";
      return;
   }
   if(s[1]==s1[1]||s[1]==s2[1]||s[1]==s3[1]||s[1]==s4[1]||s[1]==s5[1])
     {
      cout<<"YES\n";
      return;
   }
   cout<<"NO\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}