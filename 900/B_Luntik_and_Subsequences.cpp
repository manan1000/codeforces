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
        int n;
        cin>>n;
        int zeroes=0;
        int ones=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            if(x==0) zeroes++;
            if(x==1) ones++;
        }
        ll ans=ones*pow(2,zeroes);
        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
