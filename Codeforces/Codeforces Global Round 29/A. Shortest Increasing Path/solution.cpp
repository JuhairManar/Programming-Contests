// link - https://codeforces.com/contest/2147/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int x,y;
    cin>>x>>y;
    if(x==y || y==1){
        cout<<"-1\n";
        return;
    }
    if(y>x){
        cout<<"2\n";
        return;
    }

    if(x-y>=2){
        cout<<"3\n";
        return;
    }
    cout<<"-1\n";
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
