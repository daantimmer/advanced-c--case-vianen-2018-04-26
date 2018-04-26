#pragma once

#include "person.hpp"

#include <string>

struct Guest : Person
{
    Guest();
    explicit Guest(std::string name);
};