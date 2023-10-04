#include <iostream>
using namespace std;
 
 void ConTemp(double celcius){
    double kelvin =  celcius + 273.15 ; 
    double farheinhite = celcius*1.80 + 32 ; 
    cout<<"temprature in  kelvin : "<<kelvin <<endl<<"temprature in farheinhite :  "<<farheinhite;
 }

 int main (){
    int celcius; 
    cout<<"enter the temprature in celcius "<<endl;
    cin>>celcius; 
    ConTemp( celcius);
    return 0;


 }