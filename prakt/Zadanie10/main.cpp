#include <iostream>
#include <string>

class Bank {
    private:
        std::string name;
        std::string country;

    public:
        void setName(std::string bankName) {
            name = bankName;
        }

        void setCountry(std::string bankCountry) {
            country = bankCountry;
        }

        void getInfo() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Country: " << country << std::endl;
        }
};

int main() {
    Bank myBank;
    myBank.setName("My Bank");
    myBank.setCountry("My Country");
    myBank.getInfo();
    return 0;
}
