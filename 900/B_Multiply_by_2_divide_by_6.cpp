#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int solve(){
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        int twoCount=0;
        int threeCount=0;
        while(n%2==0) {
            n/=2;
            twoCount++;
        }

        while(n%3==0) {
            n/=3;
            threeCount++;
        }
        
        if(n>1 || twoCount>threeCount){
            cout<<-1<<"\n";
        }
        else{
            int count=threeCount+(threeCount-twoCount);
            cout<<count<<"\n";
        }
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
