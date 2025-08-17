//                                                                 CONSTRUCTORS
/* 
   Q. What is a Constructor?
   A. A constructor is a special type of function in C++ (and other OOP languages) that is automatically called when an object of a class 
   is created. Its main purpose is to initialize the object’s data members. There are three types of Constructors:
   1. Default Contructor
   2. Parameterized Constructor
   3. Copy COnstructor 
   
   */

   //                                                          Default Constructor
//   #include <iostream>
//   using namespace std;
  
//   class Student {
//     int age;                       //   Private attributes
//     string name;
// public:
//     Student() {                 //        Default constrcutor
//         age = 20;
//         name = "Muhammad Ayan Anwer";
//     }
//     void display(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

  
//   int main() {
//       Student s;    // Creating object (s)
//       s.display();
//       return 0;
//   }

//                                                          Parameterized Constructors
#include <iostream>
using namespace std;

// class Student {
//     private:
//     int age;
//     string name;
// public:
//    Student(int a, string n){            // A constructor with the same name of its class with initialization in Parameters 
//     age = a;
//     name = n;
//    }
//     void display() {
//         cout << "NAme is: " << name <<endl;
//         cout << "Age is: " << age <<endl;
//     }
// };

// int main() {
//     Student s(20,"Muhammad Ayan Anwer");
//     s.display();
//     return 0;
// }

//                                                               Copy Constructor
#include <iostream>
using namespace std;

class Student {
    private:
    int age;
    string name;
public:
   Student(int a, string n){            // A constructor with the same name of its class with initialization in Parameters 
    age = a;
    name = n;
   }
   Student(const Student& obj){  // Copy constructor where the 1st constructor was made constant so that the values couldn't change after initialization
    name = obj.name;                  // obj is an object where the address of Stunddent is stored 
    age = obj.age;
   }
    void display() {
        cout << "NAme is: " << name <<endl;
        cout << "Age is: " << age <<endl;
    }
};

int main() {
    Student s1(20,"Muhammad Ayan Anwer");
    Student s2(20,"MAryam");

    Student s3 = s1;   // The work of copy constructor is done here where I copied the first constructor in to 2nd through objects s1 is the obj 
                       //   of 1st constructor and s3 is an obj of 3rd which is by default 
    s3.display();
    s2.display();
    
    return 0;
}