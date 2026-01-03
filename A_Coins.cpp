#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        
        if(n%2==1 && (n-k)%2==1) cout<<"NO\n";
        else cout<<"YES\n";
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - it is not possible if n and n-k is odd 

*/
