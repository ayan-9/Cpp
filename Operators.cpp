#include<iostream>
using namespace std;

int main(){
    float a=2, b=3; // Assignment Operator 
    /* Assignment Operator yani jahan aap apni value assign karate ho. Yani alphabets ya words k andar apni values daalna. 
       For eg aap k paas purse ya wallet hai aap us k andar paise or apni id cards waghaira daalte ho us hy tarah in programming
       language aap a,b,c jaise variables ki tarah wallets banate or us mai apni values store karta with the help of Data Types(int, flloat...)
       */

    cout << "OPERATORS in C++" << endl;
    cout << "Followings are the OPERATORS in C++" << endl;

    //Arithmetic Operator
    cout << "The value of a - b is: " << a-b << endl;
    cout << "The value of a + b is: " << a+b << endl;
    cout << "The value of a * b is: " << a*b << endl;
    cout << "The value of a / b is: " << a/b << endl;
   // cout << "The value of a % b is: " << a%b <<endl;
    cout << "The value of  a++  is: " << a++ << endl;
    cout << "The value of  ++a  is: " <<++a  << endl;
    cout << "The value of a--   is: " << a-- << endl;
    cout << "The value of --a   is: " << --a << endl;
    cout << "The value of b++   is: " << b++ << endl;
    cout << "The value of ++b   is: " << ++b << endl;
    cout << "The value of b--   is: " << b-- << endl;
    cout << "The value of --b   is: " << --b << endl<< endl;

    //Comparission Operator
    
    cout << "Following are the Comparrision Operators" << endl<<endl; 
    cout << " The value of a < b  is: " << (a<b ) << endl;
    cout << " The value of a <= b is: " << (a<=b) << endl; 
    cout << " The value of a > b  is: " << (a >b) << endl;
    cout << " The value of a >= b is: " << (a>=b) << endl;
    cout << " The value of a == b is: " << (a==b) << endl;
    cout << " The value of a != b is: " << (a!=b) << endl;
 
    //Logical Operators

    cout << "Followings are the logical Operators " <<endl<<endl;
    cout << "The vallue of ((a==b)&&(a<b)) is: " << ((a==b)&&(a<b)) << endl; // && is Simple english ka "and" ye bhi or ye bhi
    cout << "The vallue of ((a==b)||(a<b)) is: " << ((a==b)||(a<b)) << endl; // || is Simple english ka "or" ya ye ya ye 
    cout << "The vallue of (!(a==b)) is: " << ((a==b)) << endl; // ! Not 

}