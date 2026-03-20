#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        
        if(a==b){
            cout<<0<<" "<<0<<"\n";
            continue;
        }

        if(b>a) swap(a,b);
        ll maxExcitment = a-b;
        ll moves = min(a%maxExcitment , maxExcitment - a%maxExcitment);

        cout<<maxExcitment<<" "<<moves<<"\n";
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
