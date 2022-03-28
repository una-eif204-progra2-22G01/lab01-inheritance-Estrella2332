
#include <iostream>
#include "Derived1.h"
#include "Derived2.h"
#include "Base.h"
// function main begins program execution
int main() {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.setName( "Estrella");
    derived1.do_something();

    Derived1 derived2;
    derived2.setName("Carlos");
    derived2.do_something();

    cout<<"Derived1 to string: "<<derived1<<endl;
    cout<<"Derived2 to string: "<<derived2<<endl;

}  // end function main