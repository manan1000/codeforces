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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        
        vector<int> ans;
        ans.push_back(arr[0]);

        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]) ans.push_back(arr[i]);
            else {
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        cout<<ans.size();
        cout<<"\n";
        for(int num: ans) cout<<num<<" ";
        cout<<"\n";
    } 

    return 0;
}

// TC - O(2N)
// SC - O(2N)
// note - if current val does not satisfy condition then just add one element(<=current element) infront of it 