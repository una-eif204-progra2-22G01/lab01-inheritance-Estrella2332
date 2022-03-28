//
// Created by esdra on 27/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>
using namespace std;

class Base {
private:
    string name{};
public:
    Base();

    virtual ~Base();

    virtual void do_something();

    const string &getName() const;

    void setName(const string &name);

    friend ostream &operator<<(ostream &os, const Base &base);

};


#endif //LAB01_INHERITANCE_BASE_H
