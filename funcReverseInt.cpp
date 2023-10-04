

#include <iostream>
using namespace std;

void reverseDigit(int n ){
    
    int ans=0;

while(n!=0)
{
   int digit= n%10;
   ans=ans*10+digit;
   n=n/10;
   

}
cout<<ans;

}

int main(){
    int n ; 
    cout<<"enter the no. "<<endl;
     cin>>n ; 
     cout<<"reverse is: ";
     reverseDigit( n );
     return 0;


}






















