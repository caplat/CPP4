#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain{

public:

    Dog();
    Dog(Dog const & src);
    Dog& operator=(Dog const & rhs);
    ~Dog();

    void makeSound()const;
    std::string getType()const;

private:

    std::string type_;
    Brain* dog_brain_;
    
};

#endif