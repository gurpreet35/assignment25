// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    void set(int r,int i){
        real=r;
        img=i;
    }
    void display(){
        cout<<"Complex number is: "<< real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    complex a;
    a.set(5,10);
    a.display();
    return 0;
}