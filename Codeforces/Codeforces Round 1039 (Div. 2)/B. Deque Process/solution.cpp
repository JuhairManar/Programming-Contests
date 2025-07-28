// link - https://codeforces.com/contest/2128/problem/B


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

// void solve(){
//     int n,i,d,s=1;
//     cin>>n;
//     deque<int>dq;
//     while(n--){
//         cin>>d;
//         dq.pb(d);
//     }
//     while(dq.size()){
//         if(s){
//             if(dq.front()<dq.back()){
//                 cout<<"L";
//                 dq.pop_front();
//             }
//             else {
//                 cout<<"R";
//                 dq.pop_back();11
//             }
//         }
//         else{
//             if(dq.front()>dq.back()){
//                 cout<<"L";
//                 dq.pop_front();
//             }
//             else {
//                 cout<<"R";
//                 dq.pop_back();
//             }
//         }

//         s=!s;
//     }

//     cout<<"\n";
// }

void solve(){
    int n,i,d,s=1,x=0,y;
    cin>>n;
    y=n-1;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    // for(auto g:v) cout<<g<<" ";
    while(x<=y){
        if(s){
            if(v[x]<v[y]){
                x++;
                cout<<"L";
            }
            else{
                y--;
                cout<<"R";
            }
        }
        else{
            if(v[x]>v[y]){
                x++;
                cout<<"L";
            }
            else{
                y--;
                cout<<"R";
            }
        }
        s=!s;
    }
    cout<<"\n";
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
