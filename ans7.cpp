// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest{
    int num1;
    int num2;
    int num3;
    public:
    int set(int n,int m ,int r){
        int big;
        num1=n;
        num2=m;
        num3=r;
        big=num1>num2 && num1>num3?num1:num2>num3?num2:num3; 
        return big;
    }
    void display(){
        cout<<"Greatest number is:"<<set(num1,num2,num3)<<endl;
    }
};
int main(){
    Greatest a;
    a.set(8,10,12);
    a.display();
    return 0;
}