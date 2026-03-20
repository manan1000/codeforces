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
        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];
        int ans=arr[0];

        for(int i=1;i<n;i++){
            ans=ans&arr[i];
        }

        cout<<ans<<"\n";
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
