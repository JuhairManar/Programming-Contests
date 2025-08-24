// link - https://codeforces.com/contest/2133/problem/A


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


void solve(){
    int n,i,j,d,f=0;
    cin>>n;
    vector<int>v(101,0);
    for(i=0;i<n;i++) {
        cin>>d;
        v[d]++;
        if(v[d]>1) f=1;
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    
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
