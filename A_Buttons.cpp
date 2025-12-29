#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a>b) cout<<"First\n";
        else if(a<b) cout<<"Second\n";
        else {
            if(c%2==1) cout<<"First\n";
            else cout<<"Second\n";
        }
    } 

    return 0;
}

// TC - O(1)
// SC - O(1)
// note - depends on c 