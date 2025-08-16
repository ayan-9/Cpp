//                                         Selection Control Structure
#include<iostream>
#include<string.h>
 using namespace std;

 int main(){
    int b;
    string a;

    cout << "Enter your name: " ;
    cin>>a ;
    cout << "Enter your age: " ;
    cin>>b ;

    if(b<1){
        cout << "You aren't born kiddo." << endl;

    }
    
     if(b>1){
        cout<< "Welcome to the World. " << endl;
    }

 return 0; 
 }