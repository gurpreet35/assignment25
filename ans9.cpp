// Define a class Circle and define an instance member function to find the area of the
// circle.
#include<iostream>
using namespace std;
class Circle{
    int radius;
    public:
    float set(int n){
        float ar;
        radius=n;
        ar=3.14*radius*radius;
        return ar;
    }
    void display(){
        cout<<"Area of the Circle is :"<<set(radius)<<endl;
    }
};
int main(){
    Circle a;
    a.set(8.01);
    a.display();
    return 0;
}