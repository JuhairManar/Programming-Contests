// link - https://www.codechef.com/problems/BESTMOVIE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t,n,a,b;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    int mn=1001;
	    while(n--){
	        cin>>a>>b;
	        
	        if(a>=7) mn=min(mn,b);
	    }
	    
	    if(mn==1001) cout<<"-1\n";
	    else cout<<mn<<"\n";
	}
}
