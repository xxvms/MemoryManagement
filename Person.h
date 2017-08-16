//
// Created by tombr on 16/08/2017.
//

#ifndef MEMORYMANAGEMENT_PERSON_H
#define MEMORYMANAGEMENT_PERSON_H


#include <string>
#include "Resource.h"
#include <memory>

class Person {
private:
    std::string first_name;
    std::string last_name;
    int arbitrary_number;
    Resource* pResource;
public:
    Person(std::string first, std::string last, int arbitrary);
    ~Person();
    Person(const Person& p);
    std::string Get_name()const;
    std::string Set_name(std::string name);
    int Get_number() const { return  arbitrary_number; } // by adding word const after function name allow us to use this function with const objects as we guarantee that it will not change anything
    void Set_number(int number) { arbitrary_number = number; }
    bool operator< (const Person& p) const;
    bool operator< (int i) const ;
    int operator+ (const Person& p) const;
    int operator- (const Person& p) const;
    friend bool operator< (int i, const Person& p);
    Person&operator= (const Person& p); // this is copy assignment operator
    void Add_Resource();

};
bool operator<(int i, const Person& p);

#endif //MEMORYMANAGEMENT_PERSON_H
