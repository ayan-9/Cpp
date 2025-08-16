//                                                          Inheritance
/* 
   Q: What is Inheritance?
   A: Inheritance is a pillar of OOP. In inheritance, the attributes of a parent class are inherited or copied into the child class. 
   For example, we children are born to our parents (mom and dad). We inherit some of their attributes, such as the voice of our father or 
   the facial expressions of our mother. There are two types of Inheritance:
   1. Multi- Level Inheritance
   2. Multiple Iheritance  
   
   Multi-Level Inheritance: 
   Multilevel inheritance means a class is derived from another derived class. It forms a chain of inheritance.

   Multiple Inheritance:
   In Multiple Inheritance, a class can inherit features (data members + methods) from more than one base class.

   */ 

/*       -> Remove this and from the bottom one to run code

                                                             Multi Level Inheritance
#include <iostream>
using namespace std;

// Base class
class Grandparent {
public:
    void property() {
        cout << "Grandparent's property" << endl;
    }
};

// Derived from Grandparent
class Parent : public Grandparent { // (:) shows inheritance
public:
    void skills() {
        cout << "Parent's skills" << endl;
    }
};

// Derived from Parent
class Child : public Parent {
public:
    void hobbies() {
        cout << "Child's hobbies" << endl;
    }
};

int main() {
    Child c;
    c.property();  // Inherited from Grandparent
    c.skills();    // Inherited from Parent
    c.hobbies();   // Defined in Child
    return 0;
}
*/                                                //                 -> Remove this and from the bottom one to run code

/* 
        
                                                                     Multiple Inheritance 
#include <iostream>
using namespace std;

// First base class
class Father {
public:
    void talent() {
        cout << "Father's talent: Singing" << endl;
    }
};

// Second base class
class Mother {
public:
    void skill() {
        cout << "Mother's skill: Cooking" << endl;
    }
};

// Derived class inherits from both Father and Mother
class Child : public Father, public Mother {
public:
    void hobby() {
        cout << "Child's hobby: Playing guitar" << endl;
    }
};

int main() {
    Child c;
    c.talent();  // From Father
    c.skill();   // From Mother
    c.hobby();   // From Child
    return 0;
}
     
*/