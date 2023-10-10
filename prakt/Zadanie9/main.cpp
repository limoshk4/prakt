#include <iostream>
#include <string>

class Television {
private:
    std::string model;
    double screenSize;

public:
    void setModel(const std::string& m) {
        model = m;
    }

    void setScreenSize(double size) {
        screenSize = size;
    }

    void printInfo() {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Screen size: " << screenSize << " inches" << std::endl;
    }
};

int main() {
    Television tv;
    tv.setModel("Samsung");
    tv.setScreenSize(42);
    tv.printInfo();

    return 0;
}
