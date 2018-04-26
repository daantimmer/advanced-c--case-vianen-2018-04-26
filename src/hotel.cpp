#include "hotel.hpp"

#include "guest.hpp"

void Hotel::AddGuest(Guest& guest)
{
    guests[guest.name] = guest;
}

Guest& Hotel::GetGuest(std::string& name)
{
    return guests[name];
}