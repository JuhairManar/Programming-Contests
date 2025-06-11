#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,f=1;
    cin>>n;

    if(n>3){
        n=n%3;
        if(n==0){
            cout<<"3\n";
            return;
        }
        else{
            cout<<1<<"\n";
            return;
        }
    }
    if(n==3){
        cout<<n<<"\n";
        return;
    }
    cout<<"1\n";
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
