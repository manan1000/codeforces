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
        string s;
        cin>>s;
        int zeroes=0;
        int ones=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') zeroes++;
            else ones++;
        }

        if(zeroes==ones){
            cout<<0<<"\n";
        }

        else{
            int n=s.length();
            int curr=0;
            
            for(curr=0;curr<n;curr++){
                if(s[curr]=='0'){
                    if(ones>0) ones--;
                    else break;
                }
                else{ 
                    if(zeroes>0) zeroes--;
                    else break;
                }
            }

            cout<<n-curr<<"\n";
        }
    } 

    return 0;
}

/*

TC - O(N)+O(N)
SC - O(N)
note  - 
eg - 

s=111100
if we swap 1 and 0
t=001111

but still the last 4 are same so we need to delete 4 


*/
