// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include<iostream>
using namespace std;
class square{
    int x;
    int count;
    public:
    int set(int a,int y){
        count=y;
        int square1;
        x=a;
        square1=x*x;
        count++;
        cout<<"Function is "<<count<<"'s time called!"<<endl;
        return square1;
    }
    void display(){
        cout<<"square of number is:"<<set(x,count)<<endl;
        
    }
};
int main(){
    square a;
    a.set(5,0);
    a.display();
    return 0;
}