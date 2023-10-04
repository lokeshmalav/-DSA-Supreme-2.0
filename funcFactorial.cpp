#include <iostream> 
 using namespace std;
  
  void Factorial(int n ){
    int fact= 1;
    for(int i=1; i<=n; i++){
        fact =  fact*i;
    }
    cout<<" factorial of "<<n <<" is : "<<fact;
  }

  int main(){
    int n;
    cout<<" Enter the no. "<<endl;
     cin>>n;
      Factorial(n);
      return 0;
  }