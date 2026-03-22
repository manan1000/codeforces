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
        vector<int> secondMin;
        int lowestFirstMin=INT_MAX;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<int> arr(m);
            for(int j=0;j<m;j++){
                cin>>arr[j];
            }

            sort(arr.begin(),arr.end());
            secondMin.push_back(arr[1]);
            lowestFirstMin=min(lowestFirstMin,arr[0]);
        }

        sort(secondMin.begin(),secondMin.end());
        ll secondMinSum=0;
        for(int i=1;i<n;i++) secondMinSum+=secondMin[i];

        ll ans=secondMinSum+lowestFirstMin;
        cout<<ans<<"\n";

    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
