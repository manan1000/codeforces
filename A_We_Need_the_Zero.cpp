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
        int totalXOR=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            totalXOR^=num;
        }
        if(n%2==0){
            if(totalXOR==0) cout<<0<<"\n";
            else cout<<-1<<"\n";
        }
        else cout<<totalXOR<<"\n";

    } 

    return 0;
}

/*

TC - O(N)
SC - O(1)
note - 

case 1 (n is even)
expression = a1^x ^ a2^x ^ a3^x ... ^ an^x
           = a1^a2^a3...^an ^ x^x^x...^x   
           = a1^a2^a3...^an  (by xor property x^x=0)

           if (a1^a2^a3...^an) == 0 then "x" can be any number
           if (a1^a2^a3...^an) != 0 then there does not exist an "x"


case 2 (n is odd)
expression = a1^x ^ a2^x ^ a3^x ... ^ an^x
           = a1^a2^a3...^an ^ x^x^x...^x   
           = a1^a2^a3...^an ^ x (by xor property x^x^x = 0^x = x)

           therefore x needs to be a1^a2^a3...^an to make the expression 0
           so x = a1^a2^a3...^an
*/
