#include "Animal.h"

#include <utility>

Animal::Animal(string name, int age) : name(std::move(name)), age(age) {}
