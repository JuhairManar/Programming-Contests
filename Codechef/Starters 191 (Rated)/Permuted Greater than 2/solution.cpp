// link - https://www.codechef.com/START191D/problems/PERMGE2

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    if(y==0){
        if(x-1<=z && z)   // 0 2 0
        {
            cout<<"Yes\n";
            return;
        }
        else {
            cout<<"No\n";
            return;
        }
    }


    else{
        if(x<=z){       // 0 2 1
            cout<<"Yes\n";
            return;
        }
        else{
            cout<<"No\n";
            return;
        }
    }

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
