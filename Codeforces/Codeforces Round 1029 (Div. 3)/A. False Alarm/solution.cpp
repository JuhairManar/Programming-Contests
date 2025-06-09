//link - https://codeforces.com/contest/2117/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,x,sp,ep,i;
    cin>>n>>x;

    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]){
            sp=i;
            break;
        }
    }

    for(i=n-1;i>=0;i--){
        if(a[i]){
            ep=i;
            break;
        }
    }

    if(x>ep-sp){
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";
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
