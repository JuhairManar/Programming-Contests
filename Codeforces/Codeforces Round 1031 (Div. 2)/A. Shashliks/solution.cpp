// link - https://codeforces.com/contest/2113/problem/A


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    long k,a,b,x,y,s=0;
    cin>>k>>a>>b>>x>>y;
    if(k<0){
        cout<<"0\n";
        return;
    }

    if(x<y){
        swap(x,y);
        swap(a,b);
    }

    if(k>=b){
        s+=((k-b)/y)+1;
    }
    k-=s*y;

    if(k>=a){
        s+=((k-a)/x)+1;
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
