#include "hotel.hpp"

#include "guest.hpp"

void Hotel::AddGuest(Guest& guest)
{
    guests[guest.name] = guest;
}

Guest& Hotel::GetGuest(const std::string& name)
{
    return guests[name];
}

void Hotel::SetAppreciation(Appreciation value)
{
    appreciation = value;
}


bool Hotel::IsGreatHotel()
{
    return appreciation.all();
}

bool Hotel::IsBadHotel()
{
    return appreciation.none();
}

uint32_t Hotel::GetHotelRanking()
{
    return appreciation.count();
}