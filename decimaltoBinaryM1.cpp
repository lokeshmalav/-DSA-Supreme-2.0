#include <iostream>
#include <cmath>
using namespace std;

int DecimalToBinary(int n) {
    int base = 1;
    int binary = 0;

    while (n >0) {
        int bit = n % 2;
        binary = binary + bit * base;
        n = n / 2;
       base = base*10; 
    }
    
    return binary;
}





int main() {
    int n;
    cin >> n;
    int binary = DecimalToBinary(n);
    cout << binary;
    
    return 0;
}

