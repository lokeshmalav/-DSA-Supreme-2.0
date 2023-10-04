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
   for (int i=2; i<=n; i++){
    bool isprime = isPrime(i );
    if(isprime){
        cout<<i<<" ";
    }
   }
   return 0;
 }