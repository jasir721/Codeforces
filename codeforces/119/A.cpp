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
      int n,a,b,i=0,k=0;
      cin>>a>>b>>n;
      while(n>0)
      {
         if(i%2==0)
         {
            k=gcd(a,n);
            if(n-k<=0)
            {
            cout<<0;
            return;
            }
            n-=k;
         }
         else
         {
                        k=gcd(b,n);
            if(n-k<=0)
            {
            cout<<1;
            return;
            }
            n-=k;
         }
         i++;
      }
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }
