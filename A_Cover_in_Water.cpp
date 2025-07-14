#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool isThree=false;
        int count=0;
        if(s[0]=='.') count=1;
        for(int i=1;i<n;i++){
            if(s[i]=='.'){
                count++;
                if(s[i-1]=='.' && i<n-1 && s[i+1]=='.') {
                    cout<<"2\n";
                    isThree=true;
                    break;
                }
            }
        }

        if(!isThree) cout<<count<<"\n";
    }

    return 0;
}