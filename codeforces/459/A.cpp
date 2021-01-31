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
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if(y1==y2)
   cout<<x1<<" "<<y1+x2-x1<<" "<<x2<<" "<<y1+x2-x1;
   else if(x1==x2)
   cout<<x1+y2-y1<<" "<<y1<<" "<<x2+y2-y1<<" "<<y2;
   else if(y2-y1==x2-x1||y2-y1==(-1*(x2-x1)))
   cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
   else
   cout<<"-1\n";
}
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);

         solve();
      return 0;    
   }