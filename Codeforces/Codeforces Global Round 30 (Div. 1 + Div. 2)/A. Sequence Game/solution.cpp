// link- https://codeforces.com/contest/2164/problem/A


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,i,d,mn=INT_MAX,mx=INT_MIN,x;
   cin>>n;
    for(i=0;i<n;i++){
        cin>>d;
        mn=min(mn,d);
        mx=max(mx,d);
    }
    cin>>x;

    if(x>=mn && x<=mx) cout<<"YES\n";
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
    while(t--) solve();


  return 0;
}
