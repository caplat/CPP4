#ifndef WRGANIMAL_HPP
# define WRGANIMAL_HPP
#include <iostream>

class WrongAnimal{

public:

    WrongAnimal();
    WrongAnimal(WrongAnimal const & src);
    WrongAnimal& operator=(WrongAnimal const & rhs);
    virtual ~WrongAnimal();

    void makeSound()const;
    std::string getType()const;

protected:

    std::string type_;

};

#endif