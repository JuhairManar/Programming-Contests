// link - https://codeforces.com/contest/2171/problem/C1


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){ 
   int n,a=0,b=0,i;
   cin>>n;
   vector<int>v1(n+2,0),v2(n+2,0),suf1(n+2,0),suf2(n+2,0);
   
   for(i=1;i<=n;i++) cin>>v1[i];
   for(i=1;i<=n;i++) cin>>v2[i];

   for(i=n;i>=1;i--) suf1[i]=v1[i]^suf1[i+1];
   for(i=n;i>=1;i--) suf2[i]=v2[i]^suf2[i+1];

   for(i=1;i<=n;i++){
    if(i&1){
        // a=(a^v1[i]);
        int t=a;
        
        if(a^v1[i]^suf1[i+1]>t) {
            a=a^v1[i];
        }
        else if(a^v2[i]^suf1[i+1]>t){
            a=a^v2[i];
            swap(v1[i],v2[i]);
        }
        b=b^v2[i];
    }
    else{
        // cout<<i<<" "<<a<<endl;
        int t=b;
        if(b^v2[i]^suf2[i+1]>t) {
            b=b^v2[i];
        }
        else if(b^v1[i]^suf2[i+1]>t) {
            b=b^v1[i];
            swap(v1[i],v2[i]);
        }
        a=a^v1[i];
    }

    // cout<<i<<"- "<<a<<" "<<b<<"\n";
   }

   if(a>b) cout<<"Ajisai\n";
   else if(a<b) cout<<"Mai\n";
   else cout<<"Tie\n";
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
