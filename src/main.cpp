
#include "hotel.hpp"
#include "guest.hpp"


#include <string>
#include <cassert>
#include <iostream>

int main() {

    Guest g1 {"Jan"};
    Guest g2 {std::string("Mike")};

    Hotel h;

    h.AddGuest(g1);
    h.AddGuest(g2);

    h.SetAppreciation(Hotel::Appreciation(0));

    assert(h.GetGuest("Jan").name == "Jan");
    assert(h.GetGuest("Mike").name == "Mike");

    std::cout << "End of adding and validating Hotel map" << std::endl;

};
