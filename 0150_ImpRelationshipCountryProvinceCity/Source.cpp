#include <iostream>
#include <string>
#include <vector>

class Country {
public:
    std::string Name;
    std::vector<class Province*> Provinces;

    Country(const std::string& name) : Name(name) {}
};

class Province {
public:
    std::string Name;
    class Country* Country;
    std::vector<class City*> Cities;

    Province(const std::string& name, class Country* country) : Name(name), Country(country) {}
};

class City {
public:
    std::string Name;
    class Province* Province;

    City(const std::string& name, class Province* province) : Name(name), Province(province) {}
};

int main() {
    Country* country = new Country("Country");

    Province* province1 = new Province("Province 1", country);
    province1->Cities.push_back(new City("City 1", province1));
    province1->Cities.push_back(new City("City 2", province1));

    Province* province2 = new Province("Province 2", country);
    province2->Cities.push_back(new City("City 3", province2));
    province2->Cities.push_back(new City("City 4", province2));

    country->Provinces.push_back(province1);
    country->Provinces.push_back(province2);

    std::cout << "Country: " << country->Name << std::endl;
    for (Province* province : country->Provinces) {
        std::cout << "  Province: " << province->Name << std::endl;
        for (City* city : province->Cities) {
            std::cout << "    City: " << city->Name << std::endl;
        }
    }

    // Clean up dynamic memory
    for (Province* province : country->Provinces) {
        for (City* city : province->Cities) {
            delete city;
        }
        delete province;
    }
    delete country;

    return 0;
}