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

        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            cout<<n-num+1<<" ";
        }
        cout<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1) not considering storage of initial array
note - we need to make a1+b1 = a2+b2 = ... = an+bn

*/
