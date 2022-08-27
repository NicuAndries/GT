#include "Animal.h"

#include <utility>

Animal::Animal(string name) : name(std::move(name)) {}
