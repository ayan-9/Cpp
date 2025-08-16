#include<iostream>

using namespace std;

int sum(int a, int b){
    
    // Formal parameters woh hote hain jo functions k andar define hote hain
    int c = a+b;
    return c;
}
int main(){
 int num1, num2;
 cout << "Enter your 1st number: ";
 cin >> num1;
 cout << "Enter your 1st number: ";
 cin >> num2;
 // Here num1 and num2 are actual parameters
 cout << "The sum is: " << sum(num1,num2);
    

    return 0;
}