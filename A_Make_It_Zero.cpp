#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

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
        if(n%2==0) {
            cout<<2<<"\n";
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";
        }
        else{
            cout<<4<<"\n";
            cout<<1<<" "<<n-1<<"\n";
            cout<<1<<" "<<n-1<<"\n";
            cout<<n-1<<" "<<n<<"\n";
            cout<<n-1<<" "<<n<<"\n";
        }
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - since we dont need to optimize the final answer it becomes very simple
       the answer will always be 2 or 4 depending on n
       if n is even then you just xor the entire array twice 
       if n is odd then you xor 1 to n-1 twice and then n-1 to n twice

*/
