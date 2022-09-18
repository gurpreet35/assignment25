// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class
#include<iostream>
using namespace std;
class Factorial{
    int num;
    public:
    int set(int n){
        int product=1;
        num=n;
        for (int i = 1; i <=num ; i++)
        {
            product*=i;
        }
        return product;

    }
    void display(){
        cout<<"Factorial of number is:"<<set(num)<<endl;
    }
};
int main(){
    Factorial a;
    a.set(8);
    a.display();
    return 0;
}