// #include <iostream>
// using namespace std;
// int main()
//  {
//     // Write C++ code here
//     cout<<endl<<endl;
//    for (int i=0; i<5; i++)
//    {
//      for(int j=0; j<5; j++)
//      {
//       if(i==0 || i==4){
//         cout<<"* ";
//       }
//       else{
//         if(j==0 || j==4)
//         {
//           cout<<"* ";
//         }
//         else
//         {
//           cout<<"  ";
//         }
//       }             
//      }
//      cout<<endl;
//    }
//    cout<<endl<<endl;
   
//    return 0;
// }

 #include <iostream>
using namespace std;
int main()
 {
    // Write C++ code here
    cout<<endl<<endl;
   for (int i=0; i<5; i++)
   {
     for(int j=0; j<5; j++)
     {
      if(i==0 || i==4 || j==0 || j==4){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }







     }
     cout<<endl;
   }
 }
