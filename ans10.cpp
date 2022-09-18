// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;
class Area{

    int length,breadth,side,radius;
    float pie;
    public:
    float set_circle(int n,float m){
        float ar;
        radius=n;
        pie=m;
        ar=pie*radius*radius;
        return ar;
    }
    float set_square(int n){
        float ar;
        side=n;
        ar=side*side;
        return ar;
    }
    float set_rectangle(int n,int m ){
        float ar;
        length=n;
        breadth=m;
        ar=length*breadth;
        return ar;
    }
    void display_circle(){
        cout<<"Area of the Circle is :"<<set_circle(radius,pie)<<endl;
    }
    void display_square(){
        cout<<"Area of the Square is :"<<set_square(side)<<endl;
    }
    void display_rectangle(){
        cout<<"Area of the Rectangle is :"<<set_rectangle(length,breadth)<<endl;
    }
};
int main(){
    Area square,rectangle,circle;
    circle.set_circle(5,3.14);
    square.set_square(7);
    rectangle.set_rectangle(15,20);
    circle.display_circle();
    square.display_square();
    rectangle.display_rectangle();
    return 0;
}