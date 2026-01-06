#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if((a==b && a==n) || a+b+2<=n ) cout<<"YES\n";
        else cout<<"NO\n";
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - watch video

*/
