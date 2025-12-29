#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        while(n--){
            int num;
            cin>>num;
            sum+=num;
        }

        if(sum%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    } 

    return 0;
}

// TC - O(N)
// SC - O(1)
// note - 