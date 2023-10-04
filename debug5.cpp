// member of fabbonacci series or not 

#include <iostream> 
using namespace std;

bool checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return false;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}

int main (){
    int n;
    cin>>n;
    bool b= checkMember(n);
    if(b==1){
        cout<<" "<<n<< " is a member of fabbonaacci series"<<endl;
    }
    else{
        cout<<" "<<n<< " is not a member of fabbonaacci series"<<endl;
    }
}