#include <iostream>

using namespace std;

int BinaryToDecimal(int n){ 
    int base = 1; 
    int decimal = 0;
    while(n!=0){      //  The while loop runs as long as the value of n is non-zero.
    int bit = n%10;
     decimal = decimal +  bit*base;
     base=base*2;
     n=n/10;
}
return decimal;
}

int main (){
    int n;
    cin>>n;
    int decimal = BinaryToDecimal(n);
    cout<<decimal;
    return 0;
}