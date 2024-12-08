#include <iostream>
#include <string>
using namespace std;

// Абстрактный базовый класс Animal
class Animal {
protected:
    string name;
    int age;
    string color;
public:
    virtual void Input() = 0;    // Ввод данных
    virtual void Print() = 0;    // Вывод данных
    virtual void Eat() = 0;      // Еда
    virtual void Sound() = 0;    // Звук
};

// Производный класс Elephant
class Elephant : public Animal {
public:
    void Input() override {
        name = "Слон";
        age = 10;
        color = "Серый";
    }

    void Print() override {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Цвет: " << color << endl;
    }

    void Eat() override {
        cout << name << " ест растения." << endl;
    }

    void Sound() override {
        cout << name << " издает трубный звук" << endl;
    }
};

// Производный класс Dog
class Dog : public Animal {
public:
    void Input() override {
        name = "Собака";
        age = 5;
        color = "Коричневая";
    }

    void Print() override {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Цвет: " << color << endl;
    }

    void Eat() override {
        cout << name << " ест собачью еду." << endl;
    }

    void Sound() override {
        cout << name << " гавкает" << endl;
    }
};

// Производный класс Cat
class Cat : public Animal {
public:
    void Input() override {
        name = "Кошка";
        age = 3;
        color = "Черная";
    }

    void Print() override {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Цвет: " << color << endl;
    }

    void Eat() override {
        cout << name << " ест рыбу." << endl;
    }

    void Sound() override {
        cout << name << " мяукает" << endl;
    }
};

// Производный класс Parrot (Попугай)
class Parrot : public Animal {
public:
    void Input() override {
        name = "Попугай";
        age = 2;
        color = "Зеленый";
    }

    void Print() override {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Цвет: " << color << endl;
    }

    void Eat() override {
        cout << name << " ест семена." << endl;
    }

    void Sound() override {
        cout << name << "  крякает" << endl;
    }
};

int main() {
    // Массив указателей на Animal
    Animal* animals[4];

    // Создание объектов
    animals[0] = new Elephant();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Parrot();

    // Ввод данных, вывод, еда и звук для каждого животного
    for (int i = 0; i < 4; ++i) {
        animals[i]->Input();
        animals[i]->Print();
        animals[i]->Eat();
        animals[i]->Sound();
        cout << endl;
    }
    
    return 0;
}
