#include "Cat.hpp"

Cat::Cat():type_("Cat"),cat_brain_(new Brain()){

    std::cout << "Cat default constructor" <<  std::endl;
}

Cat::Cat(Cat const & src): Animal(src), Brain(src){

    std::cout << "Cat copy constructor called"  << std::endl;
}

Cat & Cat::operator=(Cat const & rhs){

    std::cout << "Cat copy assignment operator called" << std::endl;
    if(this == &rhs)
        return(*this);
    Animal::operator=(rhs);
    Brain::operator=(rhs);
    return(*this);
}

Cat::~Cat(){

    delete cat_brain_;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const{

    std::cout << "*Cat sound*" << std::endl;
}

std::string Cat::getType()const{

    return type_;
}