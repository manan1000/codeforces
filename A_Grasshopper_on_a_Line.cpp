#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;

        if(x%k!=0){
            cout<<1<<"\n"<<x<<"\n";  // operation : n integers
        }

        else{
            cout<<2<<"\n"<<x-1<<" "<<1<<"\n";
        }
    } 

    return 0;
}

// TC - O(1)
// SC - O(1)
// note - if x%k!=0 then ans is x resulting in 1 integer
//        if x%k==0 then it is guranteed that x-1%k!=0 hence ans will be x-1 and 1 resulting in total 2 integer