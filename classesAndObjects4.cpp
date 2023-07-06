#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Animal {
  public:
    void getFamily() {
      cout << "We are animals" << endl;
    }
    virtual void getClass() { cout << "I'm an Animal." << endl;}
};

class Dog : public Animal {
  public:
    void getClass() { cout << "I'm a dog" << endl;}
};

class GermanShephard : public Dog {
  void getClass() { cout << "I'm a German Shephard" << endl;}
  void getDerived() { cout << "I'm an Animal and Dog" << endl;}
};

void whatClassAreYou(Animal *animal) {
  animal -> getClass();
}

int main() {
  Animal *animal = new Animal;
  Dog *dog = new Dog;

  animal -> getClass();
  dog -> getClass();

  whatClassAreYou(animal);
  whatClassAreYou(dog);

  Dog spot;
  GermanShephard max;

  Animal* ptrDog = &spot;
  Animal* ptrGShepard = &max;

  ptrDog -> getFamily();


  return 0;
}



