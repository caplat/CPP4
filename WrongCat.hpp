#ifndef WRGCAT_HPP
# define WRGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:

    WrongCat();
    WrongCat(WrongCat const & src);
    WrongCat& operator=(WrongCat const & rhs);
    ~WrongCat();

    void makeSound()const;
    std::string getType()const;

private:

    std::string type_;

};

#endif