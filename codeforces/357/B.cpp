#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i, n) for (int i = 0; i < n; i++)
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    int A[3];
    for (int j = 0; j < 3; j++)
        cin >> A[j],v[A[j]]=j+1;
    for (int i = 1; i < m; i++)
    {
        int A[3];
        for (int j = 0; j < 3; j++)
            cin >> A[j];
        vector<bool>B(3,false);
        fr(j,3)
        if(v[A[j]]>0)
        B[v[A[j]]-1]=true;
        fr(j,3)
        {
            // cout<<v[A[j]]<<"\t";
            if(v[A[j]]==0)
            {
                for(int k=0;k<3;k++)
                {
                    if(B[k]==false)
                    {
                        B[k]=true;
                        v[A[j]]=k+1;
                        break;
                    }
                }
                // cout<<v[A[j]]<<"\n";
            }
            // cout<<"\n";
        }
    }
    for(int i=1;i<=n;i++)
    cout<<v[i]<<" ";
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //    int t;
    //    cin>>t;
    //    while(t--)
    solve();
    return 0;
}