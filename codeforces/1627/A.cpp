#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
void solve()
{   
   int n,m;
   cin>>n>>m;
   int r,c;
   cin>>r>>c;
   vector<string>v;
   int countr=0,countc=0,count=0;
   fr(i,n)
   {
       string s;
       cin>>s;
       for(int j=0;j<s.length();j++)
       {
           if(s[j]=='B')
           count++;
       }
       v.push_back(s);
   }
   if(count==0)
   {
       cout<<"-1\n";
       return;
   }

   fr(i,m)
   {
       if(v[r-1][i]=='B')
       {
           countr++;
       }
   }
   fr(i,n)
   {
       if(v[i][c-1]=='B')
       {
           countc++;
       }
   }
//    if(countr==0 and countc==0)
//    {
//        cout<<"-1\n";
//        return;
//    }
//    if(countr==m and countc==n)
//    {
//        cout<<"0\n";
//        return;
//    }
//    if((countr>0 and countc>0))
//    {
//        cout<<"1\n";
//    }
//    else if(countr==0 || countc==0)
//    {
//        cout<<"2\n";
//    }
//    else
//    {
//        if(count==1)
//        {
//            cout<<"3\n";
//        }
//        else
//        {
//            cout<<"2\n";
//        }
//    }
//    return;
    if(v[r-1][c-1]=='B')
    {
        cout<<"0\n";
    }
    else if(n==1||m==1)
   {
       cout<<"1\n";
       return;
   }
    else if (countr>0|| countc>0)
    {
        cout<<1<<endl;
    }
    else 
    {
        cout<<2<<"\n";
    }
    return;
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