#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    void setName(const string& animalName) {
        name = animalName;
    }

    string getName() const {
        return name;
    }

    void setAge(int animalAge) {
        age = animalAge;
    }

    int getAge() const {
        return age;
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Mammal : public Animal {
public:
    void feedBaby() const {
        cout << "Feeding baby mammal." << endl;
    }
};

class Bird : public Animal {
public:
    void layEgg() const {
        cout << "Laying an egg." << endl;
    }
};

class Reptile : public Animal {
public:
    void shedSkin() const {
        cout << "Shedding skin." << endl;
    }
};

int main() {
    Mammal mammal;
    Bird bird;
    Reptile reptile;

    mammal.setName("Lion");
    mammal.setAge(5);
    mammal.displayInfo();
    mammal.feedBaby();

    bird.setName("Parrot");
    bird.setAge(2);
    bird.displayInfo();
    bird.layEgg();

    reptile.setName("Snake");
    reptile.setAge(4);
    reptile.displayInfo();
    reptile.shedSkin();

    return 0;
}

