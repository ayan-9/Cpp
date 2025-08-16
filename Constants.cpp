//                                         *Constants, Manipulators & Operator Precedence*
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 25;
    // char b ='a';
    // cout << "The value of a was: "<<b<<endl;
    // a=45;
    // b ='5';
    // cout << "The value of a is: "<<b; 

//                                                          Constansts

// int a = 2;
// cout << "The value of a was: "<<a<<endl;
// a =6;                                              // idhar error dega kiyon k upar waala a constant/ fixed hai 
// cout << "The value of a is: "<<a<<endl;

//                                                         Manipulators 

// int a=2, b=333, c=45620;
// 
// cout << "The value of a is: " << a << endl ;
// cout << "The value of b is: " << b << endl ;
// cout << "The value of c is: " << c << endl ;
// 
// cout << "The value of a with setw is: " << setw(5) << a << endl ;
// cout << "The value of b with setw is: " << setw(5) << b << endl ;
// cout << "The value of c with setw is: " << setw(5) << c << endl ;

// setw() yani set width () k andar aap space daalo jitni aap ko chahiye or set hota hai iomanip k header mai


//                                                       Operator Precedence


int a=2, b=3, c=5;
float sum;
 
sum = a*6/5+b-9+c;

cout<<"The Sum is : "<<sum;


/* Operator Precendence yani pehle kiya kaam hoga . Ye Bodmas rule ko follow karta hai 

 https://en.cppreference.com/w/cpp/language/operator_precedence
 
 This is the link you can access*/


}