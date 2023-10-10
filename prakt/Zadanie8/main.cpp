#include <iostream>
#include <string>

class Cat {
 private:
  std::string name;
  int age;
  std::string color;

 public:
  void setName(const std::string& n) {
    name = n;
  }

  void setAge(int a) {
    age = a;
  }

  void setColor(const std::string& c) {
    color = c;
  }

  void getInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " " << std::endl;
    std::cout << "Blue: " << color << std::endl;
  }
};

int main() {
  Cat kitty;

  // Установка атрибутов кота
  kitty.setName("Cat");
  kitty.setAge(3);
  kitty.setColor("blue");

  // Вывод информации о коте
  kitty.getInfo();

  return 0;
}
