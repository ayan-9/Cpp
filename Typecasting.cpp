#include<iostream>
using namespace std;

int c=25;

int main(){

    //                                                     * Built in Data TYpes *

    /* int a,b,c;

    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"ENter the value of b: ";
    cin>>b;
 
    c=a+b;

    //cout<<"The vlaue of c is: "<<c<<endl; // yahan se comment hata dun to a + b ans aayega 
    cout<<"The vlaue of c is: "<<::c<<endl; // :: ka mtlb scope resolution first : aap ko c par le kar gaya dusra : c ki value par  */
    
//                                                    *Float, Double and Long Double Literals*

    // float i = 24.3;
    // long double j= 24.3;
 
    // cout << "The size of 24.3 is: " << sizeof(24.3) << endl;
    // cout << "The size of 24.3f is: " << sizeof(24.3f) << endl;
    // cout << "The size of 24.3F is: " << sizeof(24.3F) << endl;
    // cout << "The size of 24.3l is: " << sizeof(24.3l) << endl;
    // cout << "The size of 24.3L is: " << sizeof(24.3L) << endl;
 


//                                                              *Reference VAriables*

    // int x = 256;
    // int &y = x; // idhar maine ye bata diya k y k andar x ki values hain "&" is an address operator
    // cout << x << endl;
    // cout << y << endl;

//                                                                  Type Casting 


    float a = 2.3;
    int b = 2;

    cout << "The value of b is: " << float(b) << endl;
    cout << "The value of b is: " << (float)b << endl;
    cout << "The value of a is: " << int(a) << endl;
    cout << "The value of a is: " << (int)a << endl;

}    
