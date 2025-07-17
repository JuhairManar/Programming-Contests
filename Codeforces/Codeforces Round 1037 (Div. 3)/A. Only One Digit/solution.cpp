// link - https://codeforces.com/contest/2126/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int mn=INT_MAX,n;
    cin>>n;

    while (n)
    {
        int r=n%10;
        n/=10;
        mn=min(mn,r);
    }

    cout<<mn<<"\n";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    
    while (t--)
    {
        solve();
    }
    


  return 0;
}
