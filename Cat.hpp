#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

public:

    Cat();
    Cat(Cat const & src);
    Cat& operator=(Cat const & rhs);
    ~Cat();

    void makeSound()const;
    std::string getType()const;

private:

    std::string type_;
    Brain* cat_brain_;

};

#endif