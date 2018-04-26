#pramga once

#include "person.hpp"

struct HouseKeeping: Person
{
    HouseKeeping(): Person(){}
    explicit HouseKeeping(std::string name): Person(name){}
};