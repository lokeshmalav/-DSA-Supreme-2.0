// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int BinaryToDecimal(int n){
    int base = 1;
    int binary=0;
    
    while(n>0){
        int bit= n&1;
        binary = binary+ bit*base;    // use pow(10, i++) in place of base but here pow is not working properly
        n=n>>1;
        base= base*10;
    }
    return binary;
}




int main() {
    // Write C++ code here
    int n ;
    cin>>n;
    int binary= BinaryToDecimal(n);
    cout<<binary;

    return 0;
}