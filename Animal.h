#ifndef GITDEMO_ANIMAL_H
#define GITDEMO_ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal() = default;
    Animal(string name, int age);
};


#endif //GITDEMO_ANIMAL_H
