   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
       string s;
       cin>>s;
       int k=s.length();
       for(int i=1;i<k-1;i++)
       {
           if(s[i]=='1'||s[i]=='4')
           {
               if(s[i]=='4')
               {
                   if(s[i-1]=='4'&&s[i+1]=='4')
                   {
                       cout<<"NO";
                       return;
                   }
               }
           }
           else
           {
               cout<<"NO\n";
               return;
           }
       }
       if((s[0]=='1')&&(s[k-1]=='1'||s[k-1]=='4'))
       cout<<"YES\n";
       else cout<<"NO\n";
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }