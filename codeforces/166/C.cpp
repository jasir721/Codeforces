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
    int n, k;
    cin >> n >> k;
    vector<int>A(n);
    bool flag = false;
    int cnt=0;
    fr(i, n)
    {
        cin >> A[i];
        if (A[i] == k)
            flag = true;
    }
    if(flag==false)
    A.push_back(k),cnt++;
    sort(A.begin(), A.end());
    n=A.size();
    int ans=0;
    int pos=((n+1)/2)-1;
    if(A[pos]==k)
    {
        cout<<cnt<<"\n";
        return;
    }
    if(A[pos]>k)
    {
        while(A[pos]!=k)
        {
            cnt++;n++;A.insert(A.begin(),-1);
            pos=((n+1)/2)-1;
        }
        cout<<cnt<<"\n";
    }
    else
    {
        while(A[pos]!=k)
        {
            cnt++;n++;A.push_back(-1);
            pos=((n+1)/2)-1;
        }
        cout<<cnt<<"\n";
    }
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}