// link - https://codeforces.com/contest/2112/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int a,x,y;
    cin>>a>>x>>y;

    if(a>=x && a<=y){
        cout<<"NO\n";
        return;
    }
    if(a>=y && a<=x){
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }


  return 0;
}
