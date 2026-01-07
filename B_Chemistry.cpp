#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }

        int odd=0;
        for(auto it: map){
            if(it.second%2!=0) odd++;
        }

        if(odd>k+1) cout<<"NO\n";
        else cout<<"YES\n";
    } 

    return 0;
}

/*

TC - O(N) considering O(1) map insertion
SC - O(N) 
note - property of palindrome - 
       can have as many characters with even frequency 
       can have either 0 or 1 character with off frequency 

       using this property/observation we are bothered with characters who have odd frequency
       we try to convert them to even frequency by deleting one occurence of that character
       so if there are x characters that have odd frequency then we need to bring the value of x to <=1

       so x-1<=k ==> x <= k+1
       so if x > k+1 then we cannot make it palindrome

*/
