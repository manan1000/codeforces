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
        int twoCount=0;
        bool onlyOnes=true;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]==2) {
                twoCount++;
                onlyOnes=false;
            }
        }
        if(onlyOnes) cout<<1<<"\n";
        else if(twoCount%2!=0) cout<<-1<<"\n";
        else{
            int prefixTwo=0;
            int i=0;
            while(prefixTwo!=twoCount/2){
                if(arr[i]==2) prefixTwo++;
                i++;
            }

            cout<<i<<"\n";
        }

    } 

    return 0;
}

/*

TC - O(N)
SC - O(N)
note - we cannot multiply because worst case there can be 1000 twos because n<=1000 which will bring the product to 2^1000 which will not fit insde any datatype
       so we need to balance the number of twos ,
       if it is odd then there is no possible solution 
       if even the we need to find the mid point of the number of twos
       edge case - if all elements are 1 the answer will be 1

*/
