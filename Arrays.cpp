#include<iostream>

using namespace std;

int main(){
  
    int marks[] = {80,90,100,75};
    
    
    cout << "These are Marks: " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    
    int engMarks[4];
    engMarks[0] = 29;
    engMarks[1] = 30;
    engMarks[2] = 31;
    engMarks[3] = 33;
    
    /*
    //    engMarks[2] = 60;                     // Here you can change the value as well 
    cout << "These are English's marks: " << endl;
    cout << engMarks[0] << endl;
    cout << engMarks[1] << endl;
    cout << engMarks[2] << endl;
    cout << engMarks[3] << endl; */

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of Marks " << i << " is " << marks[i] << endl;
    }
    


    return 0;
}