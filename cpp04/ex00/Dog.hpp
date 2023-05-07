#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const std::string &name);
        Dog(const Dog &obj);
        virtual ~Dog();
        Dog &operator=(const Dog &obj);
        virtual void makeSound() const;
    private:
};