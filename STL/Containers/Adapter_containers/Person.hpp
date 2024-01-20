#include <iostream>

#ifndef _PERSON_
#define _PERSON_

class Person
{
    std::string name;
    int age;

public:
    Person() : name{"Unknown"}, age{0} {}

    Person(std::string name, int age) : name{name}, age{age}
    {
    }
    bool operator<(const Person &rhs) const // used for comparison
    {
        // return this->age < rhs.age;
        return this->name < rhs.name;
    }
    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);
};

#endif