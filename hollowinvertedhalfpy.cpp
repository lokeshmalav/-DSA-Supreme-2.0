#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the no . of rows"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            if(i==0 || j==0 || j==(n-i-1) ){ // or use condition (i+j==5) instead of last
            cout<<" *";
        }
        else{
            cout<<"  ";
        }
        
    }
    cout<<endl;
}
}