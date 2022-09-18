//  Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber{
    int x;
    public:
    int set(int x1){
    int r ,rev=0;
    x=x1;
    while(x!=0){
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }  
        cout<<"Reverse of number is:"<<rev<<endl;
    }

};
int main(){
    ReverseNumber a;
    a.set(576);
    return 0;
}