#include "Animal.hpp"

Animal::Animal():type_("Animal"){

    std::cout << "Animal default constructor" <<  std::endl;  
}

Animal::Animal(Animal const & src): type_(src.type_){

    std::cout << "Animal copy constructor called"  << std::endl;
}

Animal & Animal::operator=(Animal const & rhs){

    std::cout << "Animal copy assignment operator called" << std::endl;
    if(this == &rhs)
        return(*this);
    type_ = rhs.type_;
    return(*this);
}

Animal::~Animal(){

    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()const{

    std::cout << "*Animal sound*" << std::endl;
}

std::string Animal::getType()const{

    return type_;
}