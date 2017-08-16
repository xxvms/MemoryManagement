//
// Created by tombr on 16/08/2017.
//

#include <iostream>
#include "Resource.h"

Resource::Resource(std::string n): name(n) {
    std::cout << "Constructing " << name << '\n';
}
Resource::~Resource() {
    std::cout << "Destructing " << name << '\n';
}