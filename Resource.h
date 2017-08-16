//
// Created by tombr on 16/08/2017.
//

#ifndef MEMORYMANAGEMENT_RESOURCE_H
#define MEMORYMANAGEMENT_RESOURCE_H


#include <string>

class Resource {
private:
    std::string name;
public:
    Resource(std::string n); // default construcor that takes string
    ~Resource();             // Destructor
    std::string Get_Name() const { return name; }
};


#endif //MEMORYMANAGEMENT_RESOURCE_H
