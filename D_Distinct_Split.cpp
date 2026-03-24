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
        int n;
        string s;
        cin>>n;
        cin>>s;
        vector<int> charFreq(26,0);
        for(int i=0;i<n;i++){
            charFreq[s[i]-'a']++;
        }

        unordered_set<char> seen;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(seen.find(s[i])==seen.end()){
                if(charFreq[s[i]-'a']>=2) {
                    seen.insert(s[i]);
                    a++;
                    charFreq[s[i]-'a']--;
                }
            }
            else break;
        }
        for(int i=0;i<26;i++){
            if(charFreq[i]>0) b++;
        }
        cout<<a+b<<"\n";
    } 

    return 0;
}

/*

TC - 
SC - 
note  - 

*/
