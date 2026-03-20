#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

void solve(int n,vector<int> &arr){
    for(int i=1;i<n-1;i++){
        if(arr[i-1] < arr[i] && arr[i]>arr[i+1]){
            cout<<"YES"<<"\n"<<i<<" "<<i+1<<" "<<i+2<<"\n";
            return;
        }   
    }
    no;
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
        solve(n,arr);
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
