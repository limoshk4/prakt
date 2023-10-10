#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string gender;

public:
    // Конструктор класса
    Person() {
        name = "";
        age = 0;
        gender = "";
    }

    // Методы для установки атрибутов
    void SetName(const std::string &newName) {
        name = newName;
    }

    void SetAge(int newAge) {
        age = newAge;
    }

    void SetGender(const std::string &newGender) {
        gender = newGender;
    }

    // Метод для получения информации о человеке
    void GetPersonInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
    }

    // Метод для получения имени человека
    std::string GetName() {
        return name;
    }

    // Метод для получения возраста человека
    int GetAge() {
        return age;
    }

    // Метод для получения пола человека
    std::string GetGender() {
        return gender;
    }
};

int main() {
    // Создаем объект класса "Человек"
    Person person;

    // Устанавливаем атрибуты
    person.SetName("Ivan");
    person.SetAge(30);
    person.SetGender("Man");

    // Получаем информацию о человеке и выводим на экран с использованием методов get
    std::cout << "Information about the personе:" << std::endl;
    std::cout << "Name: " << person.GetName() << std::endl;
    std::cout << "Age: " << person.GetAge() << std::endl;
    std::cout << "Gender: " << person.GetGender() << std::endl;

    return 0;
}
