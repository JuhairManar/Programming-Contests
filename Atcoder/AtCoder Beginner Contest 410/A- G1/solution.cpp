// link - https://atcoder.jp/contests/abc410/tasks/abc410_a


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    int n,k,c=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;

    for(i=0;i<n;i++){
        if(k<=a[i]) c++;
    }

    cout<<c;


  return 0;
}
