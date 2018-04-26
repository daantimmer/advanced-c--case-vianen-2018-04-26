#pragma once

#include "person.hpp"

struct Owner: Person
{
    Owner(): Person(){}
    explicit Owner(std::string name): Person(name){}
};