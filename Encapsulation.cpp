//                                                                Encapsulation 
/*  Q: What is Encapsulation?

    A: Encapsulation in OOP means combining data (variables) and the functions that work on that data into a single unit called a class. 
    It allows us to hide the internal details of how data is stored and restricts direct access using access modifiers like private, protected, 
    and public. Instead of accessing data directly, we use getter and setter functions, which provide controlled and secure interaction with the 
    object’s state. This ensures data integrity, security, and makes the code modular and easy to maintain. For example, in a Student class, 
    the age variable can be kept private and accessed only through setAge() and getAge() methods, thus encapsulating the data properly.    */
    #include <iostream>
using namespace std;

class Student {
private:
    int age;          // hidden data
    string name;

public:
    // Setter method (to set data safely)
    void setData(string n, int a) {
        name = n;
        if(a > 0)      // validation
            age = a;
    }

    // Getter method (to access data safely)
    void getData() {
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;
    s.setData("Ayan", 19);   // data set through method
    s.getData();            // accessing data via method
    return 0;
}
