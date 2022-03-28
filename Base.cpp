//
// Created by esdra on 27/3/2022.
//

#include "Base.h"

Base::Base() {}

Base::~Base() {}

const string &Base::getName()const{
    return name;
}

ostream &operator<<(ostream &os, const Base &base){
    os<<"name: "<<base.name;
    return os;
}

void Base::do_somenthing() {
    cout<<"Base"<<endl;
}