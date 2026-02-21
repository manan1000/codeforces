#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool solve(const string &s, const string &t){

    if(s==t) return true;
    unordered_map<char,int> charFreq;
    for(int i=0;i<t.length();i++) charFreq[t[i]]++;

    int i=s.length()-1;
    int j=t.length()-1;

    while(i>=0 && j>=0){
        while(s[i]==t[j] && i>=0 && j>=0){
            charFreq[t[j]]--;
            i--;
            j--;
        }

        if(charFreq[s[i]]>0) return false;
        i--;
    }

    return j<0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        solve(s,t)?yes:no;
    } 

    return 0;
}

/*

TC - O(N+M)   N=s.length , M=t.length
SC - O(M)
note  - the game forces you to delete the first occurrence of a character, 
        the characters that remain in the final word must be the last occurrences of those specific characters in the original string.
        The core rule is: If you pick a character for your target word t, 
        it must be the last available occurrence of that character in the current version of s. 
        If there is another instance of that character further to the right in s that isn't part of t, you've already failed.

*/
