#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        ll seconds=b;
        for(int i=0;i<n;i++) {
            ll num;
            cin>>num;
            seconds += min(num, a - 1);
        }

        cout<<seconds<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1)
note - 

*/
