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
        int max_blank=0;
        int current_count=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num==1) current_count=0;
            else current_count++;

            max_blank=max(max_blank,current_count);
        }

        cout<<max_blank<<"\n";
    } 

    return 0;
}

/*

TC - O(N)
SC - O(1) not considering the space required to store the array
note - 

*/
