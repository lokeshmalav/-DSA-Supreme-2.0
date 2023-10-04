#include <iostream>
using namespace std; 
 
 void KmToMiles(double Km){
    double Miles  = Km*(0.621371);
    cout<<"miles are: "<<Miles; 
 }
 int main (){
    double Km;
     cout<<"enter the no. of Km "<<endl;
     cin>>Km; 
     KmToMiles( Km);
     return 0;
 }