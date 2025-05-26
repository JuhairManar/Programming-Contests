// link - https://codeforces.com/contest/2114/problem/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    string s;
    cin>>s;
    // cout<<s<<endl;

    int num=0,i,j,on;

    for(auto g:s){
        num=(num*10)+(g-'0');
    }

    on=num;
    if(floor(sqrt(num))!=ceil(sqrt(num))){
        cout<<"-1\n";
        return ;
    }

    cout<<"0 "<<sqrt(num)<<"\n";
    return ;
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
