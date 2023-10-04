#include <iostream>
 using namespace std; 

 bool isPrime(int n ){
    for(int i=2; i<n; i++){  //  we can also use the condition i<sqrt(n)
        if(n%i==0){           // for better optimisation
           return false;
        }
         

    }
    return true;
 } 

 int main(){
    int n; 
    cout<<" enter the no,"<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<n <<"  is a Prime no. "<<endl;
    }
    else{
         cout<<n<<" is not a Prime no. "<<endl;
    }
 }