#include <iostream>
using namespace std;

// Создала абстрактный класс
class Animal {
public:
    // Создала указатели на функции
    virtual void makeSound() const = 0; 
    virtual void move() const = 0;     
};

// Создала производные классы собака и кошка
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Собака гавкает" << endl;
    }
    void move() const override {
        cout << "Собака бегает" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Кот мяукает" << endl;
    }
    void move() const override {
        cout << "Кот прыгает" << endl;
    }
};

int main() {
    // Массив указателей на Animal
    Animal* animals[] = { new Dog(), new Cat() };
    
    // Вызвала методы через указатели
    for (Animal* animal : animals) {
        animal->makeSound();
        animal->move();
    }

    return 0;
}
