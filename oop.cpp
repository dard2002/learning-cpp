#include <iostream>
#include <string>

using namespace std;


class Country {
    public:
        string countryName;
        string continentName;

        Country(string _countryName, string _contintentName) {
            countryName = _countryName;
            continentName = _contintentName;
        }

        void whereAmI() {
            cout << "You are in the nation of " << countryName << ". In the continent of " << continentName << endl;
        }
};

class City: public Country {
    public:
        string cityName;

        City(string _cityName, string _countryName, string _contintentName): Country(_countryName, _contintentName) {
            cityName = _cityName;
        }

        void whereAmI() {
            cout << "You are in the city of " << cityName << ". " << "You are in the nation of " << countryName << ". In the continent of " << continentName << endl;
        }
};

int main() {
    City dublin = City("Dublin", "Ireland", "Europe");
    Country* ireland = &dublin;

    ireland->whereAmI(); // Will remove Dublin as it is now a country - which dosen't have a city in this program!
}