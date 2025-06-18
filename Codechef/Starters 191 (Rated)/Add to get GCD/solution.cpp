//link - https://www.codechef.com/START191D/problems/ADDGCD

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    long x,y,g,c=0;
    cin>>x>>y;

    if(x==y){
        if(x==1){
            cout<<"2\n";
            return;
        }
        cout<<"0\n";
        return ;
    }

    g=__gcd(x,y);
    if(g>1){
        cout<<"0\n";
        return;
    }

    if(__gcd(x+1,y)>1 || __gcd(x,y+1)>1){
        cout<<"1\n";
        return;
    }

    cout<<"2\n";
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
