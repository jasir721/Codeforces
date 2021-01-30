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
   ll fact(ll n)
   {
      ll k=1;
      while(n!=0)
      {
         k*=(n);
         n--;
      }
      return k;
   }
   void solve()
   {   
      ll n;
      cin>>n;
      string s;
      cin>>s;
      map<char,int>v;
      fr(i,n)
      {
         v[s[i]]++;
      }
      fr(i,v['n'])
      cout<<"1 ";
      v['o']=v['o']-v['n'];
      fr(i,v['o'])
      cout<<"0 ";
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }