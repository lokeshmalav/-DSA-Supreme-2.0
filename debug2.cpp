// converts binary to decimal

#include<iostream>
using namespace std;

int main() {
    int n,sum=0,factor=1;
    cin>>n;
    while(n!=0){
        int digit = n%10;     //  use modulo 
        sum = sum + digit*factor;
        factor = 2*factor;
        n = n/10;         // use divide
    }
    cout<<sum;
    return 0;
}






// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n/10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }