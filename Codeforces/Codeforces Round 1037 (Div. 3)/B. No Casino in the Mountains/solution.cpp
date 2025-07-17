// link - https://codeforces.com/contest/2126/problem/B


// #pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,i,f=0,tc=0,k,s=0;
    cin>>n>>k;

    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++){
        if(f==0 && a[i]==0){
            tc++;
            if(tc==k) {
                s++;
                tc=0;
                f=1;
            }
        }
        else{
            f=0;tc=0;
        }
    }

    cout<<s<<"\n";
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
