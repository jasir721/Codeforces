#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int isVowel(char c)
{
   return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'||c=='y'||c=='Y');
}
void solve()
{   
   string s,t;
   cin>>s;
   int n=s.length();
   fr(i,n)
   {
      if(isVowel(s[i])==0)
      cout<<"."<<(char)tolower(s[i]);
   }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;    
}