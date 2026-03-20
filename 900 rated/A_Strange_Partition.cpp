#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        ll sum=0;
        ll maxBeauty=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxBeauty+=(arr[i]+x-1)/x;
            sum+=arr[i];
        }
        
        ll minBeauty=(sum+x-1)/x;
        

        cout<<minBeauty<<" "<<maxBeauty<<"\n";
    } 

    return 0;
}





/*
arr = 6 4 11
sum = 21

i=0
prev = 2
beauty = 2 + 5 = 7

i=1
prev=4
beauty=4+4=8


TC - 
SC - 
note  - 

*/
