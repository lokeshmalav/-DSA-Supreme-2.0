#include <iostream>
using namespace std;
int main (){
    int n=6;
    for(int i=0; i<6; i++){
        for(int j=0; j<(n-i); j++){
            if(i==0 || j==0 || (i+j)==5){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}