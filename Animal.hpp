#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal{

public:

    Animal();
    Animal(Animal const & src);
    Animal& operator=(Animal const & rhs);
    virtual ~Animal() = 0;

    virtual void makeSound()const = 0;
    virtual std::string getType()const = 0;

protected:

    std::string type_;

};

#endif