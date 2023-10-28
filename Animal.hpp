#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal{

public:

    Animal();
    Animal(Animal const & src);
    Animal& operator=(Animal const & rhs);
    virtual ~Animal();

    virtual void makeSound()const;
    virtual std::string getType()const;

protected:

    std::string type_;

};

#endif