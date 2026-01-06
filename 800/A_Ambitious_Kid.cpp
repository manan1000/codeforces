#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int mini=INT_MAX;
    while(n--){
        int num;
        cin>>num;
        mini=min(mini,abs(num));
    } 

    cout<<mini<<"\n";

    return 0;
}

// TC - O(N)
// SC - O(1)
// note - need to make 1 element zero then product will be zero , so choose the smallest element and make sure to check for abs val