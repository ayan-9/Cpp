#include<iostream>

using namespace std;

class Employee{
    private:
        int a,b,c;
    public:
     int d,e,f;
     
     void setData(int a1, int b1 , int c1);
     void getData(){
        cout << "The value is: " << a << endl;
        cout << "The value is: " << b << endl;
        cout << "The value is: " << c << endl;
        cout << "The value is: " << d << endl;
        cout << "The value is: " << e << endl;
     }
     
};

void Employee :: setData(int a1, int b1 , int c1){
 a = a1;
 b = b1;
 c = c1;
}

int main(){

    Employee Ayan;
    Ayan.d = 4;
    Ayan.e = 5;
    Ayan.f = 6;
    Ayan.setData(1,2,3);
    Ayan.getData();

    return 0;
}