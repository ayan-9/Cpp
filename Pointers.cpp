/*What are Pointers?
Ans: Pointers are a data type which holds the address of another data type.*/


#include<iostream>

using namespace std;

int main(){
    int a=2;
    int* b= &a;

    cout << "The value of a is: " << a << endl;
    cout << "The value of a is: " << &a << endl;
    cout << "The value of a is: " << b << endl;
    cout << "The value of a is: " << *b << endl;
    
    // Pointer to pointer (Yani woh pointer jo dusre pointer ka address store kar raha ho)
    int** c = &b;
    
    cout << "The value of a is: " << **c <<endl;
    cout << "The value at address  c is: " << *c <<endl;
    cout << "The address of b is: " << c <<endl;
    cout << "The address of b is: " << &b <<endl;

    return 0;
}
/*

& -> Address Operator
* -> Deference (The value of )

*/