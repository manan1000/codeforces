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
        int positives=0;
        int negatives=0;
        int operations=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;

            if(num<0) negatives++;
            else positives++;
        }

        while(negatives>positives || negatives%2==1){
            positives++;
            negatives--;
            operations++;
        }

        cout<<operations<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1)
note - we have to satisfy 2 conditions
       1. sum should be >=0 (to fulfill this the  difference of count of positive - negative should be >=0)
       2. product ==1 (to fulfill this we need to make the negative ones count even) 
*/

