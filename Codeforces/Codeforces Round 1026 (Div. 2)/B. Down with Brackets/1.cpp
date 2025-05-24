// link- https://codeforces.com/contest/2110/problem/B


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    string s;
    cin>>s;

    bool f=0;

    stack<char>st;

    for(auto g:s){
        if(st.empty() && f){
            cout<<"YES\n";
            return;
        }

        if(g==')' && st.top()=='('){
            st.pop();
            f=1;
            continue;
        }

        else {
            st.push(g);
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
