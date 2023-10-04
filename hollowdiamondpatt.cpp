#include <iostream>
using namespace std;
int main(){
    int num ;
    cin>>num;
int n= num /2;





    for (int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int k=0; k<i+1; k++){
              if(k==0 || k==i){
            cout<<" *";
        }
        else{
            cout<<"  ";
        }
        }
        cout<<endl;
    }

 for(int i=0; i<n; i++){
       // spaces 
       for (int j=0; j<i; j++){
           cout<<" ";
       }
       // stars
       for(int k=0; k<n-i; k++){
         if(k==0 || k==(n-i-1)){
        cout<<" *";
       }
       else{
        cout<<"  "; 
       }
       }
       cout<<endl;
     }



    return 0;
}
