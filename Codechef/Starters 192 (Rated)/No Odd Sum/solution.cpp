// link - https://www.codechef.com/START192D/problems/NODDSM

// #pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,d,i,o=0,tw=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d;
        if(d==1) o++;
        else tw++;
    }

    if(o%2) cout<<tw<<"\n";
    else{
        cout<<min(o/2,tw)<<"\n";
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
