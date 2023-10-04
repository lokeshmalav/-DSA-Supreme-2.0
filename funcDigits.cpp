#include <iostream>
using namespace std;


void digit(int n){
    while(n!=0){
    int digit = n%10;
    n=n/10;
    cout<<digit<<"  "; 
     
}

}

int reverseDigit(int n ){
    
    int ans=0;

while(n!=0)
{
   int digit= n%10;
   ans=ans*10+digit;
   n=n/10;
   

}
return ans;

}

int main(){
    int n ; 
    cout<<"enter the no. "<<endl;
     cin>>n ; 
     
    
     int reversed =  reverseDigit( n );
     cout<<" digits are ";
     digit(reversed);
     return 0;


}



