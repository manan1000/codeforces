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
        int n,k;
        cin>>n>>k;

        ll sum=0;
        vector<int> arr(n*k);
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }

        int pointer=n*k;
        while(k--){
            pointer-=(n/2+1);
            sum+=arr[pointer];
        }

        cout<<sum<<"\n";
    } 

    return 0;
}


/*

TC - 
SC - 
note  - 

*/
