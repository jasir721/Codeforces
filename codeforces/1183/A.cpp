   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   void solve()
   {   
      int a;
      cin>>a;
      for(int i=a;i<=a+100;i++)
      {
         int j=0,k=i;
         while(k!=0)
         {
            j+=k%10;
            k/=10;
         }
         if(j%4==0)
         {
         cout<<i<<"\n";
         return;
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