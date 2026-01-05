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
        string s;
        cin>>n;
        cin>>s;

        if(n<=1) cout<<n<<"\n";
        else{
            int left=0,right=n-1;
            while(left<=right){
                if(s[left]!=s[right]){
                    left++;
                    right--;
                }
                else break;
            }

            cout<<right-left+1<<"\n";
        }

        
    } 

    return 0;
}

/*

TC - 
SC - 
note - 

*/
