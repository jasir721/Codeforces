#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
    string s1, s2;
    int less = 0;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] < 97)
            s1[i] += 32;
        if(s2[i] < 97)
            s2[i] += 32;
    }
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] > s2[i]){
            less = 1;
            break;
        }
        if(s1[i] < s2[i]){
            less = -1;
            break;
        }
    }
    cout << less << endl;
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