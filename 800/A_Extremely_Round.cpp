#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// O(1) solution

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        int totalDigits=s.length();
        int firstDigit=s[0]-'0';

        int count=9*(totalDigits-1);
        count+=firstDigit;

        cout<<count<<"\n";
    } 

    return 0;
}

/*

TC - O(1)
SC - O(1)
note - lets say the number is 234, the answer would be as - 
       from 1-9 = 9 number
       from 10-90 = 9 numbers
       from 100-234 = 2 numbers

       from here we observe a pattern that if the total digits = x then the answer will be 9 * (x-1) + the first digit

*/


// O(10^6) solution

// void findRoundNos(vector<int> &roundNos){
//     for(int i=0;i<=999999;i++){
//         int num=i;
//         int nonZero=0;
//         while(num!=0){
//             int remainder=num%10;
//             if(remainder!=0) nonZero++;
//             num/=10;
//         }

//         if(nonZero==1) roundNos.push_back(i);
//     }
// }


// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     vector<int> roundNos;
//     findRoundNos(roundNos);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int count=0;
//         for(int i=0;i<roundNos.size();i++){
//             if(roundNos[i]<=n) count++;
//         }

//         cout<<count<<"\n";
//     } 

//     return 0;
// }

/*

TC - 6*10^6 + 54 * 10^4  (6*10^6 to calculate round numbers(O(6) to find digits) , 54 * 10^4 for iterating over roundNos for each testcase )
SC - O(54) (total number of extremely round numbers <=999999)
note - we can just loop through 1 - n to find round numbers but it will give tle
       so we need to optimize the code
       one observation is that extremely round numbers are very rare therefore we can precompute it before hand

*/
