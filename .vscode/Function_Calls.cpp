//               Function Call by Reference

#include<iostream>

using namespace std;

void swap(int a, int b){
    int temp =a ;
    a = b ;
    b = temp ;
}
// Call by Reference using pointers
void swappoint(int* a, int* b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}
int main(){

    int x = 1, y = 2 ;
    cout << "The value of x: " << x <<" The value of y: " << y << endl;
    swap( x , y );      /*Yaha swap is liye nahi hua cuz ue wahi exact values utha kar chaap di jo usy mili thi*/
    cout << "The value of x: " << x <<" The value of y: " << y << endl;
    swappoint( &x , &y ); /*Yahan is liye swap hoogaya cuz hamari swapping address k andar hui thi or us address se value humne bulayi 
                            This is called Function Called by Reference.*/
    cout << "The value of x: " << x <<" The value of y: " << y << endl;

    return 0;
}