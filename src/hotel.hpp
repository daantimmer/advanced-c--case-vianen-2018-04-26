#pragma once

#include <map>
#include <string>
#include <bitset>

struct Guest;
struct Owner;
struct HouseKeeping;

struct Hotel
{
    using Appreciation = std::bitset<9>;

    void AddGuest(Guest&);
    Guest& GetGuest(const std::string&);

    void SetAppreciation(Appreciation);

    bool IsGreatHotel();
    bool IsBadHotel();
    uint32_t GetHotelRanking();

private:
    std::map<std::string, Guest> guests;
    Appreciation appreciation;

public:
};