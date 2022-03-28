//
// Created by esdra on 27/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H

using namespace std;

class Base {
    string name;
public:
    Base();

    virtual ~Base();

    virtual void do_somenthing();

    const string &get name() const;

    void setName(const string &name);
    +
    friend ostream &operator<<(ostream &os, const Base &base);

};


#endif //LAB01_INHERITANCE_BASE_H
