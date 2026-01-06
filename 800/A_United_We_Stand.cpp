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
        int maxi=INT_MIN;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        vector<int> b,c;

        for(int i=0;i<n;i++){
            if(arr[i]==maxi) c.push_back(arr[i]);
            else b.push_back(arr[i]);
        }

        if(b.size()==0) cout<<"-1\n";
        else {
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(int num: b) cout<<num<<" ";
            cout<<"\n";

            for(int num: c) cout<<num<<" ";
            cout<<"\n";
        }
    } 

    return 0;
}

// TC - O(3N)
// SC - O(2N)
// note - trick is to keep max value on c array such that it satisfies the condition (b%c!=0). If we keep larger value on right side of mod it will not be able to divide 