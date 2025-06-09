//link - https://codeforces.com/contest/2117/problem/B

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    long n,i;
    cin>>n;

    for(i=1;i<=n;i+=2){
        cout<<i<<" ";
    }

    if(n%2) n-=1;

    for(i=n;i>=2;i-=2){
        cout<<i<<" ";
    }

    cout<<"\n";
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

