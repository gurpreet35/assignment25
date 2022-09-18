//  Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include<iostream>
using namespace std;
class LargestNumber{
    int a;
    int b;
    int c;
    public:
    int set(int a1,int b1,int c1){
    int big;
        a=a1;
        b=b1;
        c=c1;
        big=a>b&&a>c?a:b>c?b:c;
        return big;
    }
    void display(){
        cout<<"Larget number is:"<<set(a,b,c)<<endl;
    }
};
int main(){
    LargestNumber a;
    a.set(5,10,2);
    a.display();
    return 0;
}