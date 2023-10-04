// #include <iostream>

// using namespace std;


// int main(){
//     int n;
//     cout<<"enter the no of digits"<<endl;

//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int num = 0;
//     for(int i=0; i<n; i++){
//         int factor = 1;
//         for(int k=0; k<n-i-1; k++){
//          factor = factor *10;}
//         num = num + arr[i]*factor;
//     }
//     cout<<"number formed by the digits is :  ";
//     cout<<num<<endl;
//     return 0;

// } 


#include <iostream>
using namespace std; 

void numUsingDigits(int noOfDigits){
   int num =0 ; 
   for (int i=0; i<noOfDigits; i++ ){
    int digit; 
    cout<<"enter digit "<<endl;
    cin>>digit; 
       num = num*10 + digit; 
   }
   cout<<"number formed is "<<num;
}

int main(){
    int noOfDigit; 
    cout<<"enter the no of digits" <<endl;
    cin>>noOfDigit;
     numUsingDigits( noOfDigit);
    return 0;


}
