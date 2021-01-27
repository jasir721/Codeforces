
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=-1;
    cin>>n>>m;
   
        if(n%2==0)
        {
            int min = n/2;
            int max = n;
            for(int i=min;i<=max;i++)
            {
                if(i%m==0)
                {
                    ans =i;
                    break;
                }
            }
        }
        else
        {
            int min = n/2+1;
            int max = n;
             for(int i=min;i<=max;i++)
            {
                if(i%m==0)
                {
                    ans =i;
                    break;
                }
            }
        }
        
    
    cout<<ans;
    
}