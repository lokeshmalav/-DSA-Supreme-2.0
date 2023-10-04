// area of circle 

# include <iostream> 
using namespace std; 

int AreaOfCircle(double radius ){
    float pi = 3.14;
    double area =  pi*radius*radius;
     cout<<"Area of circle "<<"  is "<<area;
}


int main (){
    double r;
    cout<<" Enter the radius of the circle "<<endl; 
    cin>>r;
     AreaOfCircle(r);
   
    return 0;
}
