// link - https://codeforces.com/contest/2117/problem/C


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    long n,d,s=0,i;
    set<long>a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d;

        a.insert(d);
        b.insert(d);

        if(a.size()==b.size()){
            s++;
            b.clear();
            // cout<<i<<endl;
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

    while(t--){
        solve();
    }


  return 0;
}
