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
   int a[3],b[3],n,c=0,m=0;
   fr(i,3)
   {
   cin>>a[i];
   c+=a[i];
   }
   fr(i,3)
   {
   cin>>b[i];
   m+=b[i];
   }
   cin>>n;
   if(c%5==0)
   n-=(c/5);
   else
   n=n-(c/5)-1;
   if(m%10==0)
   n-=(m/10);
   else
   n=n-(m/10)-1;
   if(n>=0)
   cout<<"YES\n";
   else
   cout<<"NO\n";


}
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }