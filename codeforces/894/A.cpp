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
    string s;
    cin >> s;
    int c = 0;
    int m=s.length();
    for (int i = 0; i < m; i++){
        if (s[i] == 'Q'){
            for (int j = i + 1; j <m; j++){
                if (s[j] == 'A'){
                    for (int k = j + 1; k <m; k++){
                        if (s[k] == 'Q'){
                            c++;
                        }
                    }
                }
            }
        }
    }
    cout << c;
   }
   int main()
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
         solve();
      return 0;    
   }