// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

//          OR

// #include <iostream>
//   using namespace std;
 

//  int main (){
//     int n;
//      cin>>n;
//      int i=0;
//      while(i<n){
//         int j=0;
//         int val = i;
//         while(j<i){
//             cout<<val;
//             val++;
//             j++;

//         }
//         cout<<endl;
//         i++;
//      }

//  }




//  OR


#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<(i+j-1);
            j ++;
           
        }
        cout<<"\n";
        i = i + 1;
    }
}