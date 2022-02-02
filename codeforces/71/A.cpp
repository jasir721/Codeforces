#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
	int n ;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
       string word; 
       cin >> word;
       if(word.length() > 10){
         cout << word[0] << word.length() - 2 << word[word.length()-1] << endl;    
       }else{
          cout << word << endl;    
       }    
    }
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