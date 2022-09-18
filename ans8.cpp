// Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    float set(int n,int m ){
        float ar;
        length=n;
        breadth=m;
        ar=length*breadth;
        return ar;
    }
    void display(){
        cout<<"Area of the rectangle is :"<<set(length,breadth)<<endl;
    }
};
int main(){
    Rectangle a;
    a.set(8,10);
    a.display();
    return 0;
}