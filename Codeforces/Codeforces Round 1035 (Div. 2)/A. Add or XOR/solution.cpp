// link - https://codeforces.com/contest/2119/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    // cout<<cnt<<" - ";
    ll a,b,x,y,mn,d,ec,s=0,i;
    cin>>a>>b>>x>>y;
    if(a==b){
        cout<<"0\n";
        return;
    }
    if(a>b && a>b+1){
        // cout<<"here\n";
        cout<<"-1\n";
        return;
    }
    if(a==b+1){
        if(a&1){
            cout<<y;
        }
        else{
            cout<<"-1";
        }
        cout<<"\n";
        return;
    }
    // mn=min(x,y);
    // d=b-1;
    // ec=(d/2)-((a-1)/2);
    // s+=((d-ec)*x);
    // s+=(ec)*mn;

    for(i=a;i<b;i++){
        if(i%2==0) s+=mn;
        else s+=x;
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
    
    while(t--){
        solve();
    }


  return 0;
}
