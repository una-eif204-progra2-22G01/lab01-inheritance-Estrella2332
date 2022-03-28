//
// Created by esdra on 27/3/2022.
//

#include "Base.h"

Base::Base() = default;

Base::~Base()= default;

const string &Base::getName()const{
    return name;
}

void Base::setName(const string &name) {
    Base::name = name;
}
ostream &operator<<(ostream &os, const Base &base){
    os <<"name: " << base.name;
    return os;
}

void Base::do_something() {
    cout<<"Base"<<endl;
}

