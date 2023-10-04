#include <iostream>
using namespace std;

int SetKthBit(int num, int k )
{
    int newnum = (num | (1<<k)); //  main logic is to left shift 1 by k  
    return newnum;                   // times and or it
}                        

int main (){
    int num; 
    cout<<" enter the no."<<endl;
     cin>>num; 
     int bit  ;
      cout<<"enter the bit you want to set"<<endl;
       cin>>bit; 
   int answer =     SetKthBit( num, bit  );
   cout<<"number formed by setting the bit : "<<bit <<" is "<<answer; 
   return 0;
}