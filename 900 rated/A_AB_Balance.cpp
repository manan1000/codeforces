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

        int n=s.length();
        if(s[0]==s[n-1]) cout<<s<<"\n";
        else{
            if(s[n-1]=='a') s[n-1]='b';
            else s[n-1] ='a';

            cout<<s<<"\n";
        }
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note  - 

How to find AB and BA count same or not
if the first and last characters match then the AB and BA count is same


Case 1 - First and last character are same
Then you dont need to do anything and just print the string because no count already same no need to do any operations

Case 2 - First and last character dont match
Then you need to make them same which will take only 1 operation 

So in any case the number of operations will never go above 1

String starts with 'a' and ends with 'b' = abab  [AB=2 , BA=1]
so if we make 1st char same as last char = bbab [AB=1 , BA=1]
or we make last char same as 1st char = [abaa] [AB=1 , BA=1]

String starts with 'a' and ends with 'a' = ababa  [AB=2 , BA=2] 
So no operations needed here

String starts with 'b' and ends with 'b' = babab  [AB=2 , BA=2] 
So no operations needed here

*/
