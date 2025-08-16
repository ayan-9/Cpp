//                                                        Stuctures

#include<iostream>

using namespace std;

typedef struct employee //typedef 1 shortcut hai 
{
    /* data */
    int Id;
    char favchar;
    float salary;

}ep; // bas yahan 1 dafa batado k aap kaisa obj bana rahe


int main(){
 ep Ayan;
 struct employee Anwer; // is tarah struct ki lambi se bachne k liye 
 struct employee Muhammad;
 Ayan.Id = 279;
 Ayan.favchar = 'a';
 Ayan.salary = 50000000;
 cout << "The value is: " << Ayan.Id << endl;
 cout << "The value is: " << Ayan.favchar << endl;
 cout << "The value is: " << Ayan.salary << endl;
    

    return 0;
}