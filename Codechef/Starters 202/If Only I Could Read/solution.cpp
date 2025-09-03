// link - https://www.codechef.com/problems/NOREAD

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(int cnt){
    // cout<<cnt<<" -- ";
    int n,i,j,f=1;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++) cin>>v[i];
    for(i=1;i<n;i++){
        if(v[i]<v[i-1]){
            cout<<i<<" "<<i+1<<"\n";
            return ;
        }
    }

    cout<<"-1\n";
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t,cnt=0;
    cin>>t;
    while(t--){
        solve(cnt++);
    }                                    


  return 0;
}
