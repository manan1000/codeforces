#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<1<<"\n";
        else if(n==2) cout<<9<<"\n";
        else{
            int check1=(n*n) + (n*n-1) + (n*n-2) + (n*n - n - 1);
            int check2= (n*(n-2)-1) + (n*(n-1)-2) + (n*(n-1)-1) + (n*(n-1)) + (n*n-1);
            cout<<max(check1,check2)<<"\n";
        }

    } 

    return 0;
}