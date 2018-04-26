#pragma once

#include <map>
#include <string>

struct Guest;

struct Hotel
{

    void AddGuest(Guest&);
    Guest& GetGuest(std::string&);

private:
    std::map<std::string, Guest> guests;
};