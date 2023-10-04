// #include <iostream>
// using namespace std;

// bool CheckIsEven(int num){
//     if(num%2==0){
//         return true ; 
//     }
//     else{
//         return false; 
//     }
// }
// int main(){
//     int num; 
//      cout<<"enter the number "<<endl;
//      cin>>num; 
//      bool IsEven = CheckIsEven( num);
//      if(IsEven ){
//         cout<<" even "<<endl;

//      }
//      else{
//         cout<<"not even "<<endl;
//      }
//      return 0;
// }


#include <iostream>
using namespace std;

bool CheckIsEven(int num){
    if(num&1){
        return false ; 
    }
    else{
        return true; 
    }
}
int main(){
    int num; 
     cout<<"enter the number "<<endl;
     cin>>num; 
     bool IsEven = CheckIsEven( num);
     if(IsEven ){
        cout<<" even "<<endl;

     }
     else{
        cout<<"not even "<<endl;
     }
     return 0;
}