// #include <iostream>
// using namespace std; 
 
//  int CountAllSetBits(int num){
//      int count = 0;
   
//         while(num>0){  
//             int bit = num%2;
//             if(bit ==1){
//                 count++;
//             }    
//          num =    num/2;      
//     }
//     return count ;
//  }
//  int main(){
//     int num ; 
//     cout<<"enter the number "<<endl;
//     cin>>num;
//     int SetBits = CountAllSetBits( num);
//     cout<<"number of set bits in this no are: "<<SetBits;
//     return 0;
    
//  }

#include <iostream>
using namespace std; 
 
 int CountAllSetBits(int num){
     int count = 0;
   
        while(num>0){  
            
            if(num&1){
                count++;
            }    
         num =    num/2;      
    }
    return count ;
 }
 int main(){
    int num ; 
    cout<<"enter the number "<<endl;
    cin>>num;
    int SetBits = CountAllSetBits( num);
    cout<<"number of set bits in this no are: "<<SetBits;
    return 0;
    
 }