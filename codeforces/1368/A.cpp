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
      int a,b,n,k=0;
      cin>>a>>b>>n;
      if(a>n&&b>n)
      k=0;
      else if(a>n||b>n)
      k=0;
      else 
      {
         while(a<=n&&b<=n)
         {
            if(a>=b)
            {
               b+=a;
               k++;
            }
            else
            {
               a+=b;
               k++;
            }
            //cout<<a<<" "<<b<<"\n";
         }
      }
      cout<<k<<"\n";
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
      int t;
      cin>>t;
      while(t--)
         solve();
      return 0;    
   }