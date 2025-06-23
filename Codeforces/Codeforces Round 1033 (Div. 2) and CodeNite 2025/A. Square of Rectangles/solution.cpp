// link - https://codeforces.com/contest/2120/problem/A

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


// 2 3 1 2 1 1
void solve(){
    int l1,l2,l3,b1,b2,b3,sl,sb,mxl,mxb;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    sl=l1+l2+l3;sb=b1+b2+b3;

    int x,y;

    // row wise

    if(sl==b1 && sl==b2 && sl==b3){
        cout<<"YES\n";
        return;
    }

    // column wise

    if(sb==l1 && sb==l2 && sb==l3){
        cout<<"YES\n";
        return;
    }

    if(l2+l3==l1){
        if(b1+b3==l1 && b1+b2==l1)
        {
            cout<<"YES\n";
            return;
        }
    }

    if(b2+b3==b1){
        if(l1+l3==b1 && l1+l2==b1){
            cout<<"YES\n";
            return;
        }
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
