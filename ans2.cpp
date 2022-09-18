// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include<iostream>
using namespace std;
class time{
    int hour;
    int min;
    int sec;
    public:
    void set(int h,int m,int s){
        hour=h;
        min=m;
        sec=s;
    }
    void display(){
        cout<<"Time is: "<<hour<<"hr : "<<min<<"min : "<<sec<<"sec"<<endl;
    }
};
int main(){
    time a;
    a.set(5,10,15);
    a.display();
    return 0;
}