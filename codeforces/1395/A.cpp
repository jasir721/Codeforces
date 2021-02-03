   #include<bits/stdc++.h>
   using namespace std;
   #define ll long long
   #define fr(i,n) for(int i=0;i<n;i++)
   int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
   int isPalindrome(int a[])
   {
       int j=0;
       fr(i,4)
       {
           if(a[i]%2!=0)
           j++;
       }
        return j;
   }
   void solve()
   {   
      int a[4];
      fr(i,4)
      cin>>a[i];
    //   int k=min(a[0],min(a[1],a[2]))+1;
    int j=isPalindrome(a);
    if(j<=1)
    cout<<"Yes\n";
    else if(j>=3&&a[0]>0&&a[1]>0&&a[2]>0)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    
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