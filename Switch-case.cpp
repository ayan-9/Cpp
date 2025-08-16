//                                       Selection Control Structure
#include<iostream>
using namespace std;
 int main(){

    int a;
    cout << "Enter your age: ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "You are not eligible in my pawry.";
        break;

    case 18:
        cout << "You are  eligible in my pawry.";
        break;               // break aap ko scope se bahar nikal ne mai help karta hai 
        
    case 50:
        cout << "Guru jeeeeeeeeeeeee.";
        break;    
    
    default:
    cout << "Invalid"<<endl;
        break;
    }
 }