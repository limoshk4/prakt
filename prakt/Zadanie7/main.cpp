#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string model;
    int price;

public:
    void setModel(string newModel) {
        model = newModel;
    }

    void setPrice(int newPrice) {
        price = newPrice;
    }

    void getInfo() {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Phone myPhone;

    myPhone.setModel("iPhone 12");
    myPhone.setPrice(999);

    myPhone.getInfo();

    return 0;
}
